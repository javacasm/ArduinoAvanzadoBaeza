#include <Arduino.h>


// TODO: revisar los pines EN tiene PWM

int motor1_velocidad=11;//  EnA
int motor1_adelante=7;  //  In1
int motor1_atras=8;     //  In2
int motor2_adelante=9;  //  In3
int motor2_atras=10;    //  In4
int motor2_velocidad=12;//  EnB

int sensorIRSuelo=6;
int sensorUSTrigger=5;
int sensorUSEcho=4;

void adelante()
{
  // motor 1 en dirección adelante
  digitalWrite(motor1_adelante,HIGH);
  digitalWrite(motor1_atras,LOW);

  // motor 2 en dirección adelante
  digitalWrite(motor2_adelante,HIGH);
  digitalWrite(motor2_atras,LOW);
}


void atras()
{
  // motor 1 en dirección atras
  digitalWrite(motor1_adelante,LOW);
  digitalWrite(motor1_atras,HIGH);

  // motor 2 en dirección atras
  digitalWrite(motor2_adelante,LOW);
  digitalWrite(motor2_atras,HIGH);
}

void derecha()
{
  // motor 1 en dirección atras
  digitalWrite(motor1_adelante,LOW);
  digitalWrite(motor1_atras,HIGH);

  // motor 2 en dirección adelante
  digitalWrite(motor2_adelante,HIGH);
  digitalWrite(motor2_atras,LOW);
}


void parar()
{
  // motor 1 parado
  digitalWrite(motor1_adelante,LOW);
  digitalWrite(motor1_atras,LOW);

  // motor 2 parado
  digitalWrite(motor2_adelante,LOW);
  digitalWrite(motor2_atras,LOW);
}

int dv=0; // Los motores se mueven a la misma velocidad
void velocidad(int v)
{
  // Si apreciamos que el robot avanza curvado podemos calibrarlos con 
  // valores pequeños positivos o negativos de dv
  analogWrite(motor1_velocidad,v+dv);
  analogWrite(motor2_velocidad,v);
}

void setup() {
  // Fundamental!!! ACTIVAR LAS PATILLAS DE CONTROL DE LOS MOTORES COMO SALIDAS
  pinMode(motor1_adelante,OUTPUT);
  pinMode(motor1_atras,OUTPUT);
  pinMode(motor2_adelante,OUTPUT);
  pinMode(motor2_atras,OUTPUT);

  // Sensores
  pinMode(sensorIRSuelo,INPUT);
  pinMode(sensorUSTrigger,INPUT);
  pinMode(sensorUSEcho,INPUT);
 
}

int haySuelo()
{
  int resultado=0;
  if(digitalRead(sensorIRSuelo)==HIGH) // Detectamos el suelo
  {  resultado=1; }
  else
  {  resultado=0;}
  
  return resultado;
}

int mideDistancia()
{
  // Mejor usar la librería newPing https://bitbucket.org/teckel12/arduino-new-ping/wiki/Home
  digitalWrite(sensorUSTrigger,HIGH);  // Lanzamos el ultrasonido
  delayMicroseconds(10);                // esperamos 200 microsegundos
  digitalWrite(sensorUSTrigger,LOW);   // paramos el ultrasonido
  delayMicroseconds(10);
  long tiempoRebote=pulseIn(sensorUSEcho,HIGH);  // Medimos el tiempo hasta que se detecte el rebote
  long cm=(tiempoRebote*34000)/1000;
  return cm;
}

void loop() {
  // put your main code here, to run repeatedly:
  if(haySuelo())
  {
      if(mideDistancia()<10)
      {
        adelante();
      }
      else
      {
        derecha();
        delay(300);
      }
    
  }
  else  // Si no hay suelo paramos y volvemos hacia atrás
  {
      parar();
      atras();
      delay(1000);
      derecha();
      delay(300);
  }
}
