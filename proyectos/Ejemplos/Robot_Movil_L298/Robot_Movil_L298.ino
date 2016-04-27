
int motor1_adelante=7;  //  In1
int motor1_atras=8;     //  In2
int motor2_adelante=9;  //  In3
int motor2_atras=10;    //  In4
int motor1_velocidad=11;//  EnA
int motor2_velocidad=12;//  EnB

int sensorIRSuelo=6;

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

int dv=0; // Los motores se mueven a la misma velocidad
void velocidad(int v)
{
  // Si apreciamos que el robot avanza curvado podemos calibrarlos con 
  // valores pequeños positivos o negativos de dv
  analogWrite(motor1_velocidad,v+dv);
  analogWrite(motor2_velocidad,v);
}

void setup() {
  // Fundamental!!! ACTIVAR LAS PATILLAS COMO SALIDAS
  pinMode(motor1_adelante,OUTPUT);
  pinMode(motor1_atras,OUTPUT);
  pinMode(motor2_adelante,OUTPUT);
  pinMode(motor2_atras,OUTPUT);
 
}

int haySuelo()
{
  int resultado=0;
  if(digitalRead(SensorSuelo)==HIGH) // Detectamos el suelo
  {  resultado=1; }
  else
  {  resultado=0;}
  
  return resultado;
}
void loop() {
  // put your main code here, to run repeatedly:

}
