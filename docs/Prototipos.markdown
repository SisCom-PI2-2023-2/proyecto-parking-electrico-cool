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
Para el modulo del balanceo de carga optamos por centralizar tanto la informacion como el algoritmo de balanceo en una placa ESP32.
El algoritmo funciona agrupando los 6 lugares de estacionamiento disponibles en 3 grupos de 2 lugares, simulando las 3 fases de la corriente trifasica.
La funcion del programa es identificar el grupo que contiene menor cantidad de lugares ocupados (si existe), y de no haber un grupo con menor cantidad de escoge un grupo predeterminado. La informacion del estado de los lugares se obtiene en tiempo real recopilando dato de los sensores de proximidad ubicados en los distintos lugares de estacionamiento.
El algoritmo se ejecuta en el momento en el que recibe informacion de que un nuevo vehiculo ha ingresado al parking. 
Una vez ubicado el lugar donde el nuevo vehiculo debe estacionar se acciona una luz azul que indica el lugar en cuestion. Por otro lado los lugares libres se indican con una luz verde y los ocupados con una luz azul. 

## Prototipo de lectura de tarjeta
Este prototipo consta del reconocimiento de las distintas tarjetas de identificacion, la obtencion de la informacion y el posterior procesamiento de esta.
Para simplificar la utilizacion del modulo RefId utlizado para el reconocimiento de las tarjetas se utilizo una libreria especifica del modulo de arduino compatible con la placa ESP8266, la cual está a cargo de los ingresos al parking, tanto en las funciones de reconocimiento de tarjeta, calculo de lugares totales disponibles, presentacion de la informacion en display y la apertura de la barrera en caso en el que sea posible el ingreso del vehiculo. 
El lector de tarjetas permite recopilar la informacion de las tarjetas utilizadas, devolviendo un booleano indicando que fue posible la deteccion y un array que contiene los numeros de identificacion de la tarjeta. 
El array obtenido obtiene la informacion que luego se envía al servidor de Thingsboard para ser contrastada con los datos preguardados como los usuarios con sus respectivas identificaciones y lugares ocupados totales, los cuales son la suma de los lugares ocupados detectados por los sensores y los lugares previamente reservados por la aplicacion. 
En caso en que la informacion recopilada indique que el ingreso es permitido, la placa recibira esa informacion desde el servidor y abrirá la barrera, dando lugar al balanceo de carga posterior por parte de otra placa. 




