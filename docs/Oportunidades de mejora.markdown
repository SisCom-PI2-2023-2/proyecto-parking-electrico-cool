---
layout: page
title: Oportunidades de mejora
permalink: /Oportunidades de mejora/
---

<html lang="es">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
</head>
<body style="background-color: #add8e6; color: black;">
</body>
</html>

## Lector de matrícula con cámara

## Dashboard o panel de métricas

## Guía de luces
La mejora de la guia de luces se basa en la idea de indicar al cliente que ingresa al parking su lugar de estacionamiento designado de una forma mas visual para este que unicamente señalar el lugar con un led parpadeante. La idea consiste en la utilizacion de varios leds ubicados en la calle del parking, los cuales se encenderían con algún patrón previamente establecido, que guíe al conductor del vehiculo hacia el lugar correspondiente.
Para llevar a cabo esta mejora se puede proceder de forma similar al mecanismo basico de indicación de lugar, al momento de permitir el ingreso del vehiculo se dispara el algoritmo de balanceo de carga y se obtiene el lugar designado. La diferencia con el proceso actual es que debe haber una función predefinida que encienda los LED especificos conocido el lugar a indicar.
Dado que solo contamos con 6 lugares es viable realizar 6 funciones distintas con sus respectivas rutinas de encendido y apagado de LED. Estas funciones se llamarían utilizando una estructura similar a un Switch-Case, que permita ejecutar la funcion correcta según el numero de lugar escogido. 

## Base de datos dinámica
La mejora de base de datos dinamica consiste en la posibilidad de crear nuevos usuarios a traves de la aplicacion, agregando su nombre, numero de matricula y de alguna manera su numero de tarjeta.
Dado que esta funcion forma parte de la version premium, se contaría con el sistema de reconocimiento de matriculas, por lo que el lector de tarjetas quedaría como un sistema de respaldo, por lo que el nuevo usuario podría hacer uso del estacionamiento sin haber obtenido su tarjeta previamente.
Este sistema no necesitaría que el administrador creara los usuarios manualmente, lo que aumentaría conciderablemente la eficacia del estacionamiento, permitiendo el ingreso de nuevos usuarios siempre y cuando estos cuenten con la aplicación o accedan en la Web. 
