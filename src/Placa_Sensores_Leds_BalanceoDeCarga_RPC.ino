#include <WiFi.h>  // Biblioteca para generar la conexión a internet a través de WiFi
#include <PubSubClient.h> // Biblioteca para generar la conexión MQTT con un servidor (Ej.: ThingsBoard)
#include <ArduinoJson.h>  // Biblioteca para manejar Json en Arduino


// Credenciales de la red WiFi
const char* ssid = "HUAWEI-IoT";
const char* password = "ORTWiFiIoT";



// Host de ThingsBoard
const char* mqtt_server = "demo.thingsboard.io";
const int mqtt_port = 1883;



// Token del dispositivo en ThingsBoard
const char* token = "xyaPUUBEuU2yqx1Aq3ta";

// Objetos de conexión
WiFiClient espClient;             // Objeto de conexión WiFi
PubSubClient client(espClient);   // Objeto de conexión MQTT


// Declaración de variables para los datos a manipular
unsigned long lastMsg = 0;  // Control de tiempo de reporte
int msgPeriod = 2000;       // Actualizar los datos cada 2 segundos
boolean led_state = false;


// Mensajes y buffers
#define MSG_BUFFER_SIZE  (50)
char msg[MSG_BUFFER_SIZE];
char msg2[MSG_BUFFER_SIZE];
DynamicJsonDocument incoming_message(256);


int S1 = 23;
int S2 = 22;
int S3 = 21;
int S4 = 26;
int S5 = 18;
int S6 = 5;
int L11 = 4;
int L12 = 0;
int L21 = 27;
int L22 = 3;
int L31 = 17;
int L32 = 32;
int L41 = 2;
int L42 = 16;
int L51 = 25;
int L52 = 33;
int L61 = 12;
int L62 = 14;
bool O1 = false;
bool Ban1 = false;
bool O2 = false;
bool Ban2 = false;
bool O3 = false;
bool Ban3 = false;
bool O4 = false;
bool Ban4 = false;
bool O5 = false;
bool Ban5 = false;
bool O6 = false;
bool Ban6 = false;
int timing = 0;
int ingreso = 1;
/*
  int pinIngreso=D6;*/

int GR1 = 0; /*variables integer iguales a la cantidad de lugares ocupados en cada grupo*/
int GR2 = 0;
int GR3 = 0;

// Inicializar la conexión WiFi
void setup_wifi() {
  delay(10);


  WiFi.mode(WIFI_STA); // Declarar la ESP como STATION
  WiFi.begin(ssid, password);



  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
  }



  randomSeed(micros());


  /*
    Serial.println("");
    Serial.println("¡Conectado!");
    Serial.print("Dirección IP asignada: ");
    Serial.println(WiFi.localIP());*/
}




// Función de callback para recepción de mensajes MQTT (Tópicos a los que está suscrita la placa)
// Se llama cada vez que arriba un mensaje entrante (En este ejemplo la placa se suscribirá al tópico: v1/devices/me/rpc/request/+)
void callback(char* topic, byte* payload, unsigned int length) {

  // Log en Monitor Serie
  /*Serial.print("Mensaje recibido [");
    Serial.print(topic);
    Serial.print("]: ");*/
  for (int i = 0; i < length; i++) {
    Serial.print((char)payload[i]);
  }
  Serial.println();



  // En el nombre del tópico agrega un identificador del mensaje que queremos extraer para responder solicitudes
  String _topic = String(topic);



  // Detectar de qué tópico viene el "mensaje"
  if (_topic.startsWith("v1/devices/me/rpc/request/")) { // El servidor "me pide que haga algo" (RPC)
    // Obtener el número de solicitud (request number)
    String _request_id = _topic.substring(26);



    // Leer el objeto JSON (Utilizando ArduinoJson)
    deserializeJson(incoming_message, payload); // Interpretar el cuerpo del mensaje como Json
    String metodo = incoming_message["method"]; // Obtener del objeto Json, el método RPC solicitado



    // Ejecutar una acción de acuerdo al método solicitado
    if (metodo == "checkStatus") { // Chequear el estado del dispositivo. Se debe responder utilizando el mismo request_number

      char outTopic[128];
      ("v1/devices/me/rpc/response/" + _request_id).toCharArray(outTopic, 128);

      DynamicJsonDocument resp(256);
      resp["status"] = true;
      char buffer[256];
      serializeJson(resp, buffer);
      client.publish(outTopic, buffer);

    } else if (metodo == "ingresoAuto") { // Establecer el estado del led y reflejar en el atributo relacionado
      ingreso = 1;
    }
  }
}



// Establecer y mantener la conexión con el servidor MQTT (En este caso de ThingsBoard)
void reconnect() {
  // Bucle hasta lograr la conexión
  while (!client.connected()) {
    Serial.print("Intentando conectar MQTT...");
    if (client.connect("ESP8266", token, token)) {  //Nombre del Device y Token para conectarse
      Serial.println("¡Conectado!");

      // Una vez conectado, suscribirse al tópico para recibir solicitudes RPC
      client.subscribe("v1/devices/me/rpc/request/+");

    } else {

      Serial.print("Error, rc = ");
      Serial.print(client.state());
      Serial.println("Reintenar en 5 segundos...");
      // Esperar 5 segundos antes de reintentar
      delay(5000);

    }
  }
}




void balancear();
void setup() {
  Serial.begin(9600);
  bool ingreso = false;
  pinMode(S1, INPUT);
  pinMode(S2, INPUT);
  pinMode(S3, INPUT);
  pinMode(S4, INPUT);
  pinMode(S5, INPUT);
  pinMode(S6, INPUT);
  /*pinMode(pinIngreso,INPUT);*/
  pinMode(L11, OUTPUT);
  pinMode(L12, OUTPUT);
  pinMode(L21, OUTPUT);
  pinMode(L22, OUTPUT);
  pinMode(L31, OUTPUT);
  pinMode(L32, OUTPUT);
  pinMode(L41, OUTPUT);
  pinMode(L42, OUTPUT);
  pinMode(L51, OUTPUT);
  pinMode(L52, OUTPUT);
  pinMode(L61, OUTPUT);
  pinMode(L62, OUTPUT);

  setup_wifi();                           // Establecer la conexión WiFi
  client.setServer(mqtt_server, mqtt_port);// Establecer los datos para la conexión MQTT
  client.setCallback(callback);           // Establecer la función del callback para la llegada de mensajes en tópicos suscriptos



}

void loop() {

  if (!client.connected()) {  // Controlar en cada ciclo la conexión con el servidor
    reconnect();              // Y recuperarla en caso de desconexión
  }

  client.loop();

  /*int ingreso= digitalRead(pinIngreso);*/
  if (!digitalRead(S1)) {
    O1 = false;
    digitalWrite(L11, 1);
    digitalWrite(L12, 0);
  } else if (O1) {
    Serial.print(timing);
    if (timing == 0) {
      timing = 50;
      if (Ban1) {
        digitalWrite(L11, 1);
        digitalWrite(L12, 0);
      } else {
        digitalWrite(L11, 0);
        digitalWrite(L12, 1);
      }
      if (Ban1) {
        Ban1 = false;
      } else {
        Ban1 = true;
      }
    } else {
      timing = int(timing) - 1;
    }
  } else {
    digitalWrite(L12, 1);
    digitalWrite(L11, 0);
  }


  if (!digitalRead(S2)) {

    O2 = false;
    digitalWrite(L21, 1);
    digitalWrite(L22, 0);
  } else if (O2) {
    Serial.print(timing);
    if (timing == 0) {
      timing = 50;
      if (Ban2) {
        digitalWrite(L21, 1);
        digitalWrite(L22, 0);
      } else {
        digitalWrite(L21, 0);
        digitalWrite(L22, 1);
      }
      if (Ban2) {
        Ban2 = false;
      } else {
        Ban2 = true;
      }
    } else {
      timing = int(timing) - 1;
    }
  } else {
    digitalWrite(L22, 1);
    digitalWrite(L21, 0);
  }


  if (!digitalRead(S3)) {
    O3 = false;
    digitalWrite(L31, 1);
    digitalWrite(L32, 0);
  } else if (O3) {
    Serial.print(timing);
    if (timing == 0) {
      timing = 50;
      if (Ban3) {
        digitalWrite(L31, 1);
        digitalWrite(L32, 0);
      } else {
        digitalWrite(L31, 0);
        digitalWrite(L32, 1);
      }
      if (Ban3) {
        Ban3 = false;
      } else {
        Ban3 = true;
      }
    } else {
      timing = int(timing) - 1;
    }
  } else {
    digitalWrite(L32, 1);
    digitalWrite(L31, 0);
  }



  if (!digitalRead(S4)) {
    O4 = false;
    digitalWrite(L41, 1);
    digitalWrite(L42, 0);
  } else if (O4) {
    Serial.print(timing);
    if (timing == 0) {
      timing = 50;
      if (Ban4) {
        digitalWrite(L41, 1);
        digitalWrite(L42, 0);
      } else {
        digitalWrite(L41, 0);
        digitalWrite(L42, 1);
      }
      if (Ban4) {
        Ban4 = false;
      } else {
        Ban4 = true;
      }
    } else {
      timing = int(timing) - 1;
    }
  } else {
    digitalWrite(L42, 1);
    digitalWrite(L41, 0);
  }



  if (!digitalRead(S5)) {
    O5 = false;
    digitalWrite(L51, 1);
    digitalWrite(L52, 0);
  } else if (O5) {
    Serial.print(timing);
    if (timing == 0) {
      timing = 50;
      if (Ban5) {
        digitalWrite(L51, 1);
        digitalWrite(L52, 0);
      } else {
        digitalWrite(L51, 0);
        digitalWrite(L52, 1);
      }
      if (Ban5) {
        Ban5 = false;
      } else {
        Ban5 = true;
      }
    } else {
      timing = int(timing) - 1;
    }
  } else {
    digitalWrite(L52, 1);
    digitalWrite(L51, 0);
  }

  if (!digitalRead(S6)) {
    O6 = false;
    digitalWrite(L61, 1);
    digitalWrite(L62, 0);
  } else if (O6) {
    Serial.print(timing);
    if (timing == 0) {
      timing = 50;
      if (Ban6) {
        digitalWrite(L61, 1);
        digitalWrite(L62, 0);
      } else {
        digitalWrite(L61, 0);
        digitalWrite(L62, 1);
      }
      if (Ban6) {
        Ban6 = false;
      } else {
        Ban6 = true;
      }
    } else {
      timing = int(timing) - 1;
    }
  } else {
    digitalWrite(L62, 1);
    digitalWrite(L61, 0);
  }
  if (ingreso) {
    balancear();
  }
  /*ingreso=0;*/
}

void balancear() {
  int GR1 = (!digitalRead(S1)) + (!digitalRead(S2)); /*guardo en las variables los estados de los estacionamientos*/
  int GR2 = (!digitalRead(S3)) + (!digitalRead(S4));
  int GR3 = (!digitalRead(S5)) + (!digitalRead(S6));
  if ((GR1 < GR2 && GR1 < GR3) || (GR1 == GR2 && GR1 < GR3) || (GR1 == GR3 && GR1 < GR2) || (GR1 == GR2 && GR1 == GR3 )) {
    agregarGR1();
  }
  else {
    if ((GR2 < GR1 && GR2 < GR3) || (GR2 == GR1 && GR2 < GR3) || (GR2 == GR3 && GR2 < GR1)) {
      Serial.println("Entro a G2");
      agregarGR2();
    }
    else {
      if ((GR3 < GR1 && GR3 < GR2) || (GR3 < GR2 && GR3 < GR1)) {
        agregarGR3();
      }
    }
  }

}

void agregarGR1() {
  if (!digitalRead(S1)) {
    O2 = true;
    ingreso = 0;
  }
  else {
    O1 = true;
    ingreso = 0;
  }
}

void agregarGR2() {
  if (!digitalRead(S3)) {
    O4 = true;
    ingreso = 0;
  }
  else {
    O3 = true;
    ingreso = 0;
  }
}

void agregarGR3() {
  if (!digitalRead(S5)) {
    O6 = true;
    ingreso = 0;
  }
  else {
    Serial.println("lugar n5");
    O5 = true;
    ingreso = 0;
  }
}
