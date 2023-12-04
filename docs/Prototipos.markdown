---
layout: page
title: Prototipos
permalink: /Prototipos/
---

<html lang="es">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
</head>
<body style="background-color: #add8e6; color: black;">
</body>
</html>

## Prototipo de balanceo de carga
Para el módulo del balanceo de carga optamos por centralizar tanto la información como el algoritmo de balanceo en una placa ESP32.
El algoritmo funciona agrupando los 6 lugares de estacionamiento disponibles en 3 grupos de 2 lugares, simulando las 3 fases de la corriente trifásica.
La función del programa es identificar el grupo que contiene menor cantidad de lugares ocupados (si existe), y de no haber un grupo con menor cantidad se escoge un grupo predeterminado. La información del estado de los lugares se obtiene en tiempo real recopilando dato de los sensores de proximidad ubicados en los distintos lugares de estacionamiento.
El algoritmo se ejecuta en el momento en el que recibe información de que un nuevo vehículo ha ingresado al parking. 
Una vez ubicado el lugar donde el nuevo vehículo debe estacionar se acciona una luz parpadeante que indica el lugar en cuestión. Por otro lado los lugares libres se indican con una luz verde y los ocupados con una luz roja. 

## Prototipo de lectura de tarjeta
Este prototipo consta del reconocimiento de las distintas tarjetas de identificación, la obtención de la información y el posterior procesamiento de esta.
Para simplificar la utilización del módulo RfId utlizado para el reconocimiento de las tarjetas se utilizó una librería específica del módulo de arduino compatible con la placa ESP8266, la cual está a cargo de los ingresos al parking, tanto en las funciones de reconocimiento de tarjeta, cálculo de lugares totales disponibles, presentación de la información en display y la apertura de la barrera en caso en el que sea posible el ingreso del vehiculo. 
El lector de tarjetas permite recopilar la información de las tarjetas utilizadas, devolviendo un booleano indicando que fue posible la detección y un array que contiene los números de identificación de la tarjeta. 
El array obtenido obtiene la información que luego se envía al servidor de Thingsboard para ser contrastada con los datos preguardados como los usuarios con sus respectivas identificaciones y lugares ocupados totales, los cuales son la suma de los lugares ocupados detectados por los sensores y los lugares previamente reservados por la aplicación. 
En caso en que la información recopilada indique que el ingreso es permitido, la placa recibirá esa información desde el servidor y abrirá la barrera, dando lugar al balanceo de carga posterior por parte de otra placa. 




