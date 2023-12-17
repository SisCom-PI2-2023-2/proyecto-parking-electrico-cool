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

## Microcontroladores

La lógica de los distintos elementos se controla con dos placas ESP8266 y una placa ESP32 de 38 pines. La ESP32 de 38 pines fue utilizada para el prototipo que incluye a los sensores de proximidad que detectan la presencia o ausencia de autos, los leds de cada espacio de estacionamiento y la lógica de balanceo de carga. Una de las ESP866 se utilizó para la entrada al estacionamiento, esto incluye el primer lector RFID y servomotor para barrera así como el display 7 segmentos que muestra la cantidad de lugares disponibles en el estacionamiento. Por último, la otra ESP8266 se está utilizando al momento para el lector RFID de la salida y el segundo servomotor para barrera.

Se compró además una ESP32 con módulo de cámara ya que se esperaba poder realizar un lector de matrícula utilizándola, sin embargo, por problemas que se presentaron al final del proyecto como la limitación del tiempo de entrega dejaron esta mejora pendiente.

El costo de las ESP8266 fue de UYU 400 cada una, el de la ESP32 de 38 pines de UYU 897 y por último, el de la ESP32 con cámara de UYU 1025. 

Sus especificaciones se pueden encontrar en los siguientes enlaces:

<a href="https://www.electronica.com.uy/robotica/modulos-comunicacion/m%C3%B3dulo-nodemcu-v3-esp8266-wifi-detalle.html">ESP866</a>

<a href="https://www.electronica.com.uy/robotica/modulos-comunicacion/m%C3%B3dulo-esp32-wifi-bluetooth-7684-detalle.html">ESP32 38 pines</a>

<a href="https://www.electronica.com.uy/robotica/tarjetas-accesorias-de-desarrollo/m%C3%B3dulo-esp-32-wifi-bluetooth-con-c%C3%A1mara-detalle.html">ESP32 con cámara</a>

## Sensores de proximidad

Los sensores de proximidad elegidos son sensores infrrarojo, la elección se basó en su tamaño y fácil programación en comparación con otros sensores. Los mismos son utilizados para la detección de presencia o ausencia de auto en cada uno de los lugares de estacionamiento. Se utilizarán 6 sensores pero se compraron 8 para tener de repuesto ante una eventualidad.

El costo de cada uno fue de UYU 102 y sus especificaciones se pueden encontrar en el siguiente enlace:

<a href="https://www.electronica.uy/robotica/sensores/m%C3%B3dulo-sensor-de-distancias-hc-sr04-7391-7538-detalle.html">Sensor Infrarrojo</a>

## Motores

Los motores se utilizan para las barreras o vallas a la entrada y salida del estacionamiento. Las mismas se abren o cierran según corresponda al detectar la presencia de un auto que debe entrar o salir. Para esta funcionalidad se eligieron servomotores ya que es necesario controlar que las barreras se abran o cierren formando ángulos de 90°. Se utilizarán dos servomotores, uno para la entrada y otro para la salida. 

El costo de cada uno fue de UYU 231 y sus especificaciones se pueden encontrar en el siguiente enlace:

<a href="https://www.electronica.uy/robotica/motores/motor-servo-micro-sg90-detalle.html">Servomotores</a>

## Leds RBG

Los mismos son utilizados para la indicación de disponibilidad de cada espacio del estacionamiento. Los mismos estarán en color verde si se trata de un espacio libre y en color rojo si se trata de un lugar ocupado. Mediante un parpadeo se utilizan además para indicar a qué lugar debe dirigise el auto recién ingresado según la lógica de balanceo de carga. Se utilizarán 6 de ellos, pero nuevamente se compraron 8 para contar con un respaldo en caso de algún incidente.

El costo de cada uno fue de UYU 15 y sus especificaciones se pueden encontrar en el siguiente enlace:

<a href="https://www.electronica.uy/component/virtuemart/?keyword=led+rgb&limitstart=0&option=com_virtuemart&view=category&search=true&virtuemart_category_id=0">Leds RBG</a>

## Display 7 segmentos y conversor BCD a 7 segmentos

Debido a que quisimos evitar el uso de muchos pines de la placa se utilizó un conversor BCD a 7 segmentos para convertir el número de cantidad de autos disponibles a mostrar en el display. De este prototipo solo nos implicó costo el display 7 segmentos ya que contabamos con un conversor.

El costo del display 7 segmentos fue de UYU 26 y se detallan a continuación links de referencia para ambos elementos:

<a href="https://www.electronica.uy/componentes/2359-2359-detalle.html">Display 7 segmentos</a>
<a href="https://www.microjpm.com/products/a74ls48/">Conversor BCD a 7 segmentos</a>

## Módulo RFID

Este sensor es utilizado para leer las tarjetas o llaves electrónicas de los usuarios. Una vez reconocido el usuario, se abren o cierran las barreras del estacionamiento según corresponda. Se compraron dos de ellos, uno para la entrada y otro para la salida.

El costo de cada uno fue de UYU 256 y sus especificaciones se pueden encontrar en el siguiente enlace:

<a href="https://www.electronica.uy/robotica/robotica/m%C3%B3dulo-conversor-usb-rs485-7455-7502-detalle.html">Módulo RFID</a>

## Cargador portátil

Se compraron tres cargadores portátil (power bank), uno para cada una de las placas con la intención de lograr cierta independencia de la maqueta con respecto a una fuente fija.

El costo de cada una fue de UYU 390 y sus especificaciones se pueden encontrar en el siguiente enlace:

<a href="https://www.toptecnouy.com/catalogo/celulares/cargador-portatil-power-bank-5000-mah-cable-micro-t03733/">Cargador portátil</a>

## Compras varias

Para las conexiones y prolijidad de la maqueta se realizó la compra de 2 protoboards así como también de cinta aisladora.

El costo total de estas compras fue de UYU 341 y se muestran a continuación enlaces de referencia para las mismas:

<a href="https://www.electronica.uy/componentes/accesorios-para-componentes-pasivos/protoboard-830p-blanca-detalle.html">Protoboard</a>

<a href="https://www.electronica.uy/componentes/accesorios-para-componentes-pasivos/5434-cinta-aisladora-3m-10m-detalle.html">Cinta aisladora</a>

En resumen, el presupuesto inicial era de UYU 8000 y se gastaron UYU 6169 quedando un saldo de UYU 1831. Tener en cuenta que los precios de los componentes desde el momento de la compra a la actualidad pueden haber variado.







