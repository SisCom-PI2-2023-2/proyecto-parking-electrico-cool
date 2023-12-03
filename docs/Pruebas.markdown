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
## Balanceo de carga:
1. Se pureba una version sencilla del codigo, sin leds ni sensores. La prueba consta en ingresar valores entre 0 y 2 que indiquen la cantidad de lugares ocupados en cada grupo de lugares de estacionamiento. EL algoritmo debe identificar cual de los 3 grupos es el menor e informarlo.

2. Se prueba el algoritmo de balanceo utilizando una porción reducida de sensores de proximidad. Esta prueba es similar a la anterior, solo que no se ingresan los numeros manualmente, sinó que se obtienen valore reales obtenidos de los sensores, posterior a su calibracion.  

3. Se llega a una version reducida con sensores y leds. Esta prueba utiliza una cantidd de sensores menor a la exigida para simplificar el debuggeo, y usa una cantidad de leds concistente a la cantidad de sensores. No se implementa el estado de indicacion de lugar correspondiente, la cual indica con una luz azul proveniente del led rgb cual es el lugar donde el vehiculo debe estacionar. 

4. Se implementa la version con el total de sensores y leds. En esta version se implementa el total de sensores de proximidad y de leds rgb, pero se siguen utilizando unicamente los estados de ocupado y libre, no se indica el lugar correspondiente de estacionamiento.

5. Se agrega la funcion rgb para indicar el estado del estacionamiento. La verificacion de esta prueba concluye en la version final del modulo de balanceo de carga. Se trabaja con 6 sensores de proximidad y 6 leds rgb.

## Sensor RefId
1. Se prueba el reconocimiento de las tarjetas de identificacion con la librería de RefId para Arduino. En esta prueba inicial se comprueba el correcto funcionamiento de la librería obtenida y se estudian los metodos de recopilacion de informacion del modulo RedId.

2. Se utiliza la lectura de la tarjeta como imput para la activacion de la barrera. En esta prueba intentamos empezar a unir los conceptos de verificacion y apertura de la barrera utilizando un booleano generado por el correcto reconocimiento de una tarjeta como señal para la aptertura. 

3. Se prueba obtener el numero de identificacion asociado a cada tarjeta y manipularlo. En esta prueba evaluamos formas de manipular los datos obtenidos. Se obtiene un array que contiene los numeros de reconocimiento. 

4. Se utiliza el codigo de identificacion ingresado y se lo contrasta con otro previamente ingresado en la placa para obtener coincidencias. En esta prueba ingresamos manualmente el numero de tarjeta que obtuvimos y otro numero de tarjeta distinto y los guardamos en la placa. Al momento de leer el codigo de la tarjeta buscamos comparar el dato obtenido con los datos guardados previamente, simulando el proceso posterior de validacion de usuario en la base de datos. 

5. Se utiliza la coincidencia entre identificaciones como condicion para la apertura de la barrera. Esta prueba nos permitió llegar a la version final de este modulo. La placa es capaz de comparar el codigo de identificacion de la tarjeta con los otros codigos previamente guardados, y en el cason que la informacion coincida, se procede a abrir la barrera. Esta prueba sirve como simulacion del ingreso de un usuario con reserva frente a uno que no la posea.  

## Barrera de entrada
1. Se prueba el funcionamiento del servomotor mediante codigo, sin utilizar inputs
2. Se prueba la elevacion de la barrera ante un input, en este caso una señal proveniente del reconocimiento de una tarjeta con el RefId
3. Se implementa la elevación condicional de la barrera, esta se abre al encontrar coincidencia entre la Id de entada y una previamente guardada en la placa

   
   


