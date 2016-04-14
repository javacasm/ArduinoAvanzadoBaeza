# [Curso de Arduino Avanzado](http://www.cepubeda.es/cepubeda/?mod=noticia&id=41) (162320GE028)

### Curso del CEP de Úbeda

### Nivel avanzado

#### 14, 21, 27 abril y  4, 10, 23 de Mayo de 2016

#####  IES ANDRÉS DE VANDELVIRA (Baeza)

![CC](https://licensebuttons.net/l/by-sa/3.0/88x31.png)

## José Antonio Vacas  @javacasm


* * *

## https://github.com/javacasm/ArduinoAvanzadoBaeza

## Temario

Podemos estructurar en los siguientes apartados

* Breve repaso del uso de Arduino
* Introducción a la robótica
  * Control de robots con arduino
* Ejemplos prácticos de proyectos
* Proyecto
  * Definición del proyecto: su alcance y objetivos educativos.
  * Arquitectura del sistema: componentes. Evaluación del costo.
  * Búsqueda de ejemplos y librerías necesarias.
  * Montaje
  * Pruebas
  * Documentación


## [Repaso](./Programación con Arduino.md)

1. Repaso de la programación con Arduino
  * IDE: Versiones, Instalación, Uso, Interioridades
  * Programación: Lenguaje, Estructura de control. Librerías
  * Programación en C++
  * Creación de programas
  * IO Digitales: Entrada, Salida, Pulsos
  * IO Analógicas: Entrada, Salida, PWM

2. Conceptos básicos de robótica:
  * Sensores y actuadores.
  * Conexión con sensores. Ejemplo: sensores atmosféricos y de distancia
  * Activación y control de motores: Ejemplo: ventiladores y otros motores.

3. Comunicaciones y Almacenamiento
  * Comunicaciones y protocolos: rs485, SPI, I2C
  * Almacenamiento: Tipos de memoria, SD

4. [Proyectos](./proyectos/proyectos.md)

En este módulo se desarrollaran 3 proyectos diferentes que tendrán en común el usar una placa Arduino como controlador. Se parte de un diseño genérico que los alumnos han de implementar.

Ejemplos de proyectos

* Invernadero digital:
Se medirań y registrarán variables meteorológicas: temperatura, humedad ambiental y humedad del suelo para decidir si se activan sistemas de riego o de ventilación. Los datos se guardan en una tarjeta SD de formato micro que puede ser leída desde un ordenador donde se podrán analizar. Se ha incluído una pequeño panel solar para hacerlo más ecológico.

* Estación meteorológico: Se medirań y registrarán variables meteorológicas: temperatura, humedad ambiental y presión atmósférica. Los datos se guardan en una tarjeta SD de formato micro que puede ser leída desde un ordenador donde se podrán analizar con posterioridad. Se ha dotado al sistema de un pequeño panel solar para darle mayor autonomía.

* Robot móvil:
Un sencillo robot móvil, con 2 motores y ruedas, dotado de sensores de distancia podrá realizar un mapa de la zona en la que se encuentra, detectando y evitando obtáculos en su camino. Los datos del movimiento se almacenan en un tarjeta SD para su posterior análisis.Se incluye un panel solar para aumentar su autonomía.

Bibliografía y material adicional

1. Introducción a Arduino, Massimo Banzi, Anaya Multimedia, 2012. 9788441531772
2. Guía de iniciación a Arduino http://arduino.cc/en/Guide/HomePage
3. Guía de referencia de Arduino http://arduino.cc/es/Reference/HomePage
