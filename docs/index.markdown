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

## Objetivo

El objetivo principal de este proyecto es diseñar e implementar un innovador sistema de
estacionamiento inteligente orientado a vehículos eléctricos, con el propósito de facilitar la
adopción de la movilidad sostenible, mejorar la experiencia del usuario y contribuir a la
reducción de la huella de carbono.

## Alcance del Proyecto

La principal funcionalidad del proyecto consiste en la posibilidad de realizar una reserva remota de un espacio en un estacionamiento con la posibilidad de cargar un vehículo eléctrico. La reserva podrá ser realizada a través de una computadora o dispositivo móvil utilizando un tablero de la web Thingsboard. Esta web contiene información relevante para el usuario como es la cantidad disponible de espacios de estacionamiento.

La aplicación web permite realizar la reserva en caso de que se encuentre un lugar disponible. Cuando la reserva haya sido completada exitosamente, el servidor conectado a la aplicación actualiza la cantidad de lugares disponibles, tanto para el servidor mismo como para los distintos usuarios que utilizan la aplicación de reserva. La información sobre la cantidad de lugares libres en el estacionamiento figura en la entrada de este, a través de un display. Al llegar a la entrada del estacionamiento se espera que el usuario utilice como método de autentificación una tarjeta RFID o tag.

Teniendo en consideración la cantidad de lugares disponibles en el estacionamiento y la existencia o no de la reserva por parte del usuario que intenta ingresar, podrán existir varios eventos distintos que se detallan a continuación:

1. Si el usuario reservó correctamente, lo cual se verificará al pasar su tarjeta o tag, este tendrá un lugar disponible, por lo que la valla a la entrada del estacionamiento se abrirá y permitirá el acceso del vehículo. El estacionamiento le indica al usuario donde debe colocar su vehículo basado en una lógica dentro del servidor, de modo que se optimice el consumo de corriente eléctrica de la central y no se sobrecargue. Se le indica mediante un led parpadeante.
2. Si el usuario no reservó, este solo podrá ingresar si el número de lugares disponibles es mayor a cero (este número también incluye las reservas). En caso de entrar, el sistema registra la presencia de este usuario y lo reconoce por su tarjeta o tag.

Es esencial aclarar que para el ingreso, tanto de usuarios con reserva como del resto de los usuarios, estos deben estar previamente registrados en el sistema, de modo que al utilizar el método de autenticación previamente mencionado, el programa permita identificar a los usuarios y relevar información de interés.

Luego de que los usuarios hayan ingresado (siempre de a uno por vez), un sensor valida la presencia del vehículo, de modo que cuando el vehículo desaloje el estacionamiento el sistema pueda restablecer la cantidad de lugares libres y permita nuevos ingresos y reservas.

Cada espacio del estacionamiento o central de carga cuenta con un sensor de proximidad que valida la presencia o no de un auto. En base al resultado que devuelve este sensor existe un led que se enciende de color rojo si el espacio está ocupado o verde si está libre.

En cuanto el usuario decida retirarse del estacionamiento la valla de salida se abrirá utilizando nuevamente el método de autentificación detallado para la entrada.

Toda la información del sistema está centralizada en la nube (utilizando la plataforma Thingsboard) de forma de mantener los distintos dispositivos conectados y actualizados.

## Los resultados

<html lang="es">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Mi Página con Imágenes</title>

    <style>
        .image-container {
            display: flex;
            flex-wrap: wrap;
        }

        .image-container img {
            width: 320px; /* Ajusta el tamaño deseado */
            height: 400px;
            margin-right: 10px; /* Espacio entre las imágenes */
            margin-bottom: 10px; /* Espacio entre las filas */
        }
    </style>
</head>
<body>

    <div class="image-container">
        <img src="assets/Cargadores.jpeg" alt="Imagen 1">
        <img src="assets/Camion_cargando.jpeg" alt="Imagen 2">
        <img src="assets/Display_7_seg.jpeg" alt="Imagen 3">

        <img src="assets/Maqueta_1.jpeg" alt="Imagen 4">
        <img src="assets/Maqueta_2.jpeg" alt="Imagen 5">
        <img src="assets/Maqueta_3.jpeg" alt="Imagen 6">

    </div>

</body>
</html>

## Video explicativo

## Poster del proyecto

![poster](/assets/poster_proyecto.jpg)

## Video publicitario

<html lang="es">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Mi Página con Video</title>
</head>
<body>

    <video width="740" height="400" controls>
        <source src="assets/Video_Publicitario.mp4" type="video/mp4">
        Tu navegador no soporta el elemento de video.
    </video>

</body>
</html>

## Bitácora
