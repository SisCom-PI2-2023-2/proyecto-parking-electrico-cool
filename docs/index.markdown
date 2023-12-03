---
# Feel free to add content and custom Front Matter to this file.
# To modify the layout, see https://jekyllrb.com/docs/themes/#overriding-theme-defaults

layout: home
---

<html lang="es">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
</head>
<body style="background-color: #add8e6; color: black;">
</body>
</html>

Esta es la página principal. La pueden ajustar a su gusto usando [markdown](https://www.markdownguide.org/basic-syntax/)

## Objetivo

El objetivo principal de este proyecto es diseñar e implementar un innovador sistema de
estacionamiento inteligente orientado a vehículos eléctricos, con el propósito de facilitar la
adopción de la movilidad sostenible, mejorar la experiencia del usuario y contribuir a la
reducción de la huella de carbono.

## Ejemplo

Así se agrega una imagen. En general se guardan en la carpeta `assets`:

![mtstmichel](/assets/mtstmichel.jpg)

El diseño 3D utilizado para la maqueta es el que se muestra en la siguiente imagen:
![diseno3D](/assets/Diseño_3D.JPG)


## Código incluido

Pueden incluir código y que lo pinte adecuadamente:

```c++
void loop() {

  if (!client.connected()) {
    reconnect();
  }
  client.loop();

  unsigned long now = millis();
  if (now - lastMsg > 2000) {
    lastMsg = now;
    value = random(100);

    //Send value as telemetry
    DynamicJsonDocument resp(256);
    resp["value"] = value;
    char buffer[256];
    serializeJson(resp, buffer);
    
    client.publish("v1/devices/me/telemetry", buffer);
    
    Serial.print("Publish message [telemetry]: ");
    Serial.println(buffer);
    
  }
}
```

## Otras páginas

Creando archivos `.markdown` en la carpeta principal pueden agregar "tabs" de navegación a la página. Por ejemplo [la del equipo](/equipo) y [otra de prueba](/prueba)

## Configuración del sitio

El archivo `_config.yml` contiene la configuración básica del sitio. Edítenlo para ajustarlo a su proyecto.

## Bitácora
