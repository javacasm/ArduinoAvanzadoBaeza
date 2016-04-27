
int motor1_adelante=7;  //  In1
int motor1_atras=8;     //  In2
int motor2_adelante=9;  //  In3
int motor2_atras=10;    //  In4
int motor1_velocidad=11;//  EnA
int motor2_velocidad=12;//  EnB


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


void setup() {
  // Fundamental!!! ACTIVAR LAS PATILLAS COMO SALIDAS
  pinMode(motor1_adelante,OUTPUT);
  pinMode(motor1_atras,OUTPUT);
  pinMode(motor2_adelante,OUTPUT);
  pinMode(motor2_atras,OUTPUT);
 
}

void loop() {
  // put your main code here, to run repeatedly:

}
