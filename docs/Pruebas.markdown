---
layout: page
title: Pruebas de concepto
permalink: /Pruebas/
---

## Balanceo de carga:
1. Se pureba una version sencilla del codigo, sin leds ni sensores. 
2. Se prueba el algoritmo de balanceo utilizando una porción reducida de sensores de proximidad
3. Se llega a una version reducida con sensores y leds
4. Se implementa la version con el total de sensores y leds
5. Se agrega la funcion rgb para indicar el estado del estacionamiento.

## Sensor RefId
1. Se prueba el reconocimiento de las tarjetas de identificacion con la librería de RefId para Arduino
2. Se utiliza la lectura de la tarjeta como imput para la activacion de la barrera
3. Se prueba obtener el numero de identificacion asociado a cada tarjeta y manipularlo
4. Se utiliza el codigo de identificacion ingresado y se lo contrasta con otro previamente ingresado en la placa para obtener coincidencias
5. Se utiliza la coincidencia entre identificaciones como condicion para la activacion de la tarjeta
   


