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

Durante la ejecución del proyecto Volt Park, nos enfrentamos a diversos desafíos y limitaciones temporales que influyeron en la implementación completa de todas las funcionalidades previstas. Estos obstáculos, documentados detalladamente en nuestra bitácora, han dado lugar a la identificación de tareas específicas que, por razones prácticas, han quedado pendientes en la etapa actual del desarrollo.

Reconocemos que la excelencia en la ejecución de proyectos a menudo implica la capacidad de adaptarse a circunstancias cambiantes y superar obstáculos inesperados. A pesar de nuestros esfuerzos, algunas tareas, consideradas como mejoras potenciales para el proyecto, no pudieron ser completadas en el marco de tiempo asignado.

Estas tareas pendientes abarcan áreas específicas, como la optimización de ciertos procesos y la implementación de características adicionales que inicialmente formaban parte de nuestra visión integral para Volt Park. No obstante, a pesar de su omisión temporal, estas tareas representan oportunidades de mejora valiosas que consideramos para futuras iteraciones del proyecto.

Nuestra dedicación a la excelencia y el impulso continuo hacia la innovación nos motivan a considerar estas tareas pendientes como pasos naturales hacia el perfeccionamiento de Volt Park.

Se detallan a continuación algunas de estas posibles mejoras:

## Lector de matrícula con cámara

Una de las mejoras planificadas para el proyecto Volt Park implica la implementación de un sistema avanzado de lectura de matrículas, enriqueciendo la experiencia de ingreso y salida de vehículos eléctricos. Esta mejora propone la integración de un lector de matrículas basado en una placa ESP32 con un módulo de cámara dedicado. Este dispositivo, inteligentemente diseñado para la captura eficiente de matrículas vehiculares, constituiría una adición significativa a la actual autenticación mediante tarjetas RFID y tags.

La clave de esta mejora radica en la capacidad de la ESP32 para procesar imágenes en tiempo real, permitiendo la identificación instantánea de las matrículas de los vehículos al ingresar o salir del estacionamiento. Para maximizar la eficacia de este sistema, se contempla la integración con una API especializada en reconocimiento de matrículas, optimizada para ofrecer resultados precisos y rápidos. Esta API servirá como un componente central para el procesamiento de datos, facilitando la vinculación rápida y segura entre las matrículas detectadas y los perfiles de usuarios registrados en el sistema.

La implementación de esta mejora no solo enriquecerá la autenticación de usuarios, sino que también brindará una capa adicional de seguridad y conveniencia. Los usuarios experimentarán un proceso de ingreso y salida más fluido, respaldado por la tecnología de vanguardia que redefine los estándares de eficiencia en estacionamientos para vehículos eléctricos.

## Dashboard o panel de métricas

Otra mejora propuesta para el proyecto es la creación de un Dashboard de Administración en la plataforma Thingsboard, diseñado específicamente para el personal encargado del estacionamiento. Este dashboard proporcionaría un acceso centralizado a datos e información clave, permitiendo un análisis integral del rendimiento del sistema y optimizando la toma de decisiones operativas.

Entre las características destacadas de este dashboard se incluiría la capacidad de rastrear el tiempo de utilización de cada espacio de estacionamiento con cargador, ofreciendo una visión detallada de la demanda de carga eléctrica en diferentes momentos del día. Además, el administrador del parking tendría acceso a métricas precisas, como la cantidad de vehículos que ingresaron en un período específico, proporcionando una comprensión detallada del flujo de usuarios y permitiendo ajustes estratégicos en la oferta de servicios.

Para implementar esta mejora, se exploran diversas vías, como la integración de los datos provenientes de los sensores de proximidad y el sistema RFID de entrada/salida. Estos sistemas, responsables de detectar la ocupación de los espacios y autenticar la entrada y salida de vehículos, podrían transmitir información en tiempo real a la plataforma Thingsboard a través de protocolos IoT estándar. Esta integración permitiría una monitorización continua y la generación de informes detallados que respalden la toma de decisiones informadas por parte del administrador del parking.

Esta mejora no solo ampliaría la capacidad de supervisión y gestión del estacionamiento, sino que también proporcionaría una base sólida para futuras optimizaciones basadas en datos con miras a la eficiencia y sostenibilidad continuas.

## Guía de luces

La mejora de la guía de luces se basa en la idea de indicar al cliente que ingresa al parking su lugar de estacionamiento designado de una forma mas visual para este que únicamente señalar el lugar con un led parpadeante. La idea consiste en la utilización de varios leds ubicados en la calle del parking, los cuales se encenderían con algún patrón previamente establecido, que guíe al conductor del vehiculo hacia el lugar correspondiente.
Para llevar a cabo esta mejora se puede proceder de forma similar al mecanismo básico de indicación de lugar, al momento de permitir el ingreso del vehículo se dispara el algoritmo de balanceo de carga y se obtiene el lugar designado. La diferencia con el proceso actual es que debe haber una función predefinida que encienda los LEDs específicos conocido el lugar a indicar.
Dado que solo contamos con 6 lugares es viable realizar 6 funciones distintas con sus respectivas rutinas de encendido y apagado de LED. Estas funciones se llamarían utilizando una estructura similar a un Switch-Case, que permita ejecutar la función correcta según el número de lugar escogido. 

## Base de datos dinámica

La mejora de base de datos dinámica consiste en la posibilidad de crear nuevos usuarios a través de la aplicación, agregando su nombre, número de matrícula y de tarjeta.
En caso de contar con el sistema de reconocimiento de matrículas descripto anteriormente, el lector de tarjetas quedaría como un sistema de respaldo, por lo que el nuevo usuario podría hacer uso del estacionamiento sin haber obtenido su tarjeta previamente.
Este sistema no necesitaría que el administrador cree los usuarios manualmente, lo que aumentaría considerablemente la eficacia del estacionamiento, permitiendo el ingreso de nuevos usuarios siempre y cuando estos cuenten con la aplicación o accedan en la Web. 
