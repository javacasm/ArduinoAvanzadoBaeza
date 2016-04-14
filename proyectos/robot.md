# [Curso de Arduino Avanzado](http://www.cepubeda.es/cepubeda/?mod=noticia&id=41) (162320GE028)

### Curso del CEP de Úbeda

### Nivel avanzado

#### 14, 21, 27 abril y  4, 10, 23 de Mayo de 2016

#####  IES ANDRÉS DE VANDELVIRA (Baeza)

![CC](https://licensebuttons.net/l/by-sa/3.0/88x31.png)
## José Antonio Vacas  @javacasm

# Robot móvil

![robot](https://lh6.googleusercontent.com/-0FRQ2C8_RGE/VTpwbOIYmpI/AAAAAAAA4w8/bBxwFRr3z4M/w1014-h761-no/IMG_20150423_202826.jpg)

[Otro Ejemplo](http://www.leantec.es/blog/13_Robot-autonomo-esquiva-objetos.html)

## Descripción

Robot móvil: Un sencillo robot móvil, con 2 motores y ruedas, dotado de sensor de distancia. Podremos realizar un mapa de la zona en la que se encuentra, detectando y evitando obtáculos en su camino. Los datos del movimiento se almacenan en un tarjeta SD para su posterior análisis.

## Objetivos

* Aprenderemos a controlar los motores, sabiendo acelerarlos y frenarlos según queramos. Veremos que cuando tenemos distintas direcciones de giro (o velocidades) entre ellos el robot gira sobre sí mismo.
* Aprenderemos a medir distancias con el sensor.
* El robot avanzará en línea recta midiendo en todo momento la distancia de los objetos en su línea de movimiento.
* Si se detecta un objeto más cerca de una determinada distancia, se girará hacia un lado para evitarlo
* Se puede hacer que el sensor de distancia cambie su orientación con el servo, en ese caso se puede buscar qué dirección tiene un camino libre mayor y girar hasta esa dirección.

## Componentes

* Motores
![motor](http://www.electan.com/product_thumb.php?img=images/Pololu/0J1093.jpg&w=320&h=240)

* Control de motores [pagina](http://www.dfrobot.com/wiki/index.php?title=Arduino_Motor_Shield_(L298N)_(SKU:DRI0009))

![control](http://www.dfrobot.com/wiki/images/1/1e/Arduino_Shield3.png)

* Sensor de ultrasonidos [página](http://www.seeedstudio.com/wiki/index.php?title=Ultra_Sonic_range_measurement_module)

## Modelo

### Robots con motores DC

Me gustaría basarme en [este modelo](http://www.thingiverse.com/thing:200582) pero añadiendo la posibilidad de mover el [sensor de ultrasonidos](http://www.thingiverse.com/thing:787202) con un servo
Habría que añadir un pequeño soporte para el panel solar

### Robots que usan servos de rotación continua

[Robot Evolution](http://www.thingiverse.com/thing:750928/#files) ([Montaje](http://diwo.bq.com/montaje-del-printbot-evolution/))

![evo](http://www.tecselec.com/521-thickbox_default/bq-kit-printbot-evolution.jpg)

[Versión simplificada del Evolution](https://github.com/javacasm/evoPrintBot)
![evoPrintBot](https://github.com/javacasm/evoPrintBot/raw/master/imagenes/evoPrintBot.png)

### Robots con motores paso a paso

[Escornabot](https://escornabot.com/web/es/home/4) Un estupendo robot muy utilizado en docencia y con muchísima documentación.
![escornabot](https://escornabot.com/web/sites/default/files/node_attachs/brivoipcb.jpg)

### [Otras alternativas](http://www.thingiverse.com/javacasm/collections/robot-movil)



## Ejemplos:

* [Accionamiento de motores](http://www.dfrobot.com/wiki/index.php?title=Arduino_Motor_Shield_(L298N)_(SKU:DRI0009)#Sample_Code)
* [Detección de obstáculos](http://www.seeedstudio.com/wiki/index.php?title=Ultra_Sonic_range_measurement_module#Programming)
* Cálculo de distancias

## Librerías

* [Motor](http://www.dfrobot.com/wiki/index.php?title=Arduino_Motor_Shield_%28L298N%29_%28SKU:DRI0009%29)
* [Ping](http://playground.arduino.cc/Code/NewPing) (sensor de ultrasonidos)
