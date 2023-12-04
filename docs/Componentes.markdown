---
layout: page
title: Componentes
permalink: /Componentes/
---

<html lang="es">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
</head>
<body style="background-color: #add8e6; color: black;">
</body>
</html>

##Microcontroladores

La lógica de los distintos elementos se controla con una placa ESP8266 y dos placas ESP32 (una de 38 pines y otra con módulo de cámara). La opción con cámara se eligió teniendo en consideración que se espera poder desarrollar una solución que lea la matrícula de los autos a la entrada o salida del estacionamiento para su identificación. La ESP32 de 38 pines fue utilizada para el prototipo que incluye a los sensores de proximidad que detectan la presencia o ausencia de autos, los leds de cada espacio de estacionamiento y la lógica de balanceo de carga. La ESP866 se utilizó para la entrada al estacionamiento, esto incluye el primer lector RFID y servomotor para barrera así como el display 7segmentos que muestra la cantidad de lugares disponibles en el estacionamiento. Por último, la ESP32 con módulo de cámara se está utilizando al momento para el lector RFID de la salida y el segundo servomotor para barrera.

El costo de la ESP8266 fue de UYU 400, el de la ESP32 de 38 pines de UYU 897 y por último, el de la ESP32 con cámara de UYU 1025. 

Sus especificaciones se pueden encontrar en los siguientes enlaces:
<a href="https://www.electronica.com.uy/robotica/modulos-comunicacion/m%C3%B3dulo-nodemcu-v3-esp8266-wifi-detalle.html">ESP866</a>

<a href="https://www.electronica.com.uy/robotica/modulos-comunicacion/m%C3%B3dulo-esp32-wifi-bluetooth-7684-detalle.html">ESP32 38 pines</a>

<a href="https://www.electronica.com.uy/robotica/tarjetas-accesorias-de-desarrollo/m%C3%B3dulo-esp-32-wifi-bluetooth-con-c%C3%A1mara-detalle.html">ESP32 con cámara</a>
