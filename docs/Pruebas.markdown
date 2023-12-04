---
layout: page
title: Pruebas de concepto
permalink: /Pruebas/
---
<html lang="es">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
</head>
<body style="background-color: #add8e6; color: black;">
</body>
</html>

## Balanceo de carga
1. Se prueba una versión sencilla del código, sin leds ni sensores. La prueba consta en ingresar valores entre 0 y 2 que indiquen la cantidad de lugares ocupados en cada grupo de lugares de estacionamiento. El algoritmo debe identificar cual de los 3 grupos es el menor e informarlo.

2. Se prueba el algoritmo de balanceo utilizando una porción reducida de sensores de proximidad. Esta prueba es similar a la anterior, solo que no se ingresan los números manualmente, sino que se obtienen valores reales obtenidos de los sensores, posterior a su calibración.  

3. Se llega a una versión reducida con sensores y leds. Esta prueba utiliza una cantidad de sensores menor a la exigida para simplificar el debuggeo, y usa una cantidad de leds consistente a la cantidad de sensores. No se implementa aún el estado de indicación de lugar correspondiente, el cual se indica con una luz parpadeante alternando verde/rojo proveniente del led rgb, indica el lugar donde el vehículo debe estacionar. 

4. Se implementa la versión con el total de sensores y leds. En esta version se implementa el total de sensores de proximidad y de leds rgb, pero se siguen utilizando únicamente los estados de ocupado y libre, no se indica el lugar correspondiente de estacionamiento.

5. Se agrega la función rgb para indicar el estado del estacionamiento. La verificacion de esta prueba concluye en la versión final del módulo de balanceo de carga. Se trabaja con 6 sensores de proximidad y 6 leds rgb.

## Sensor Rfid
1. Se prueba el reconocimiento de las tarjetas de identificación con la librería de Rfid para Arduino. En esta prueba inicial se comprueba el correcto funcionamiento de la librería obtenida y se estudian los métodos de recopilación de información del modulo Rfid.

2. Se utiliza la lectura de la tarjeta como input para la activación de la barrera. En esta prueba intentamos empezar a unir los conceptos de verificación y apertura de la barrera utilizando un booleano generado por el correcto reconocimiento de una tarjeta como señal para la apertura. 

3. Se prueba obtener el número de identificación asociado a cada tarjeta y manipularlo. En esta prueba evaluamos formas de manipular los datos obtenidos. Se obtiene un array que contiene los numeros de reconocimiento. 

4. Se utiliza el codigo de identificación ingresado y se lo contrasta con otro previamente ingresado en la placa para obtener coincidencias. En esta prueba ingresamos manualmente el número de tarjeta que obtuvimos y otro número de tarjeta distinto y los guardamos en la placa. Al momento de leer el código de la tarjeta buscamos comparar el dato obtenido con los datos guardados previamente, simulando el proceso posterior de validación de usuario en la base de datos. 

5. Se utiliza la coincidencia entre identificaciones como condición para la apertura de la barrera. Esta prueba nos permitió llegar a la version final de este módulo. La placa es capaz de comparar el código de identificación de la tarjeta con los otros códigos previamente guardados, y en el caso que la información coincida, se procede a abrir la barrera. Esta prueba sirve como simulación del ingreso de un usuario con reserva frente a uno que no la posea.  

## Barrera de entrada
1. Se prueba el funcionamiento del servomotor mediante código, sin utilizar inputs.
2. Se prueba la elevación de la barrera ante un input, en este caso una señal proveniente del reconocimiento de una tarjeta con el RfId.
3. Se implementa la elevación condicional de la barrera, esta se abre al encontrar coincidencia entre la Id de entrada y una previamente guardada en la placa.

   
   


