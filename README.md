RobotMovil
==========

Librería básica para empezar un programa para un robot móvil y programas de ejemplo

- Arduino con la placa RedBot de Sparkfun u otra de control de motores(puede modificarse el .cpp
  y usar otras placas de motores)
- Dos motores de DC (o cuatro pareados)
- Sensores de ultrasonidos HR SR-04
- Sensores de líneas

Los archivos de librería RobotMovil.h y RobotMovil.cpp deben estar en la carpeta de librerías personales de Arduino

Las funciones de esa librería son

RobotMovil nombredelobjeto; / para crear el objeto que se usará luego

nombredelobjeto.forward(l,r,t); // movimiento hacia adelante con r,l velocidad de las ruedas izquierda y derecha entre 0 y 255,
durante t tiempo en ms

nombredelobjeto.reverse(l,r,t); // idem hacia atrás

nombredelobjeto.rotate(t); // gira durante un tiempo t (positivo o nevativo para girar a derecha e izquierda

nombredelobjeto.brake(t); // para durante un tiempo t los dos motores

Los ejemplos de uso necesitan además la librería NewPing.h
