
#include <BitbloqUS.h>

void setup() {
pinMode(4,OUTPUT);
pinMode(9,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);

}

US ultrasonidos_0(3, 2);

void loop() {
  int distancia = ultrasonidos_0.read();

  if((distancia>100 )&& (distancia<200))
  {
    digitalWrite(4,HIGH);
  }
  else
  {
     digitalWrite(4,LOW);
  }

  if((distancia>70)&& (distancia<98))
  {
    digitalWrite(5,HIGH);
  }
  else
  {
     digitalWrite(5,LOW);
  }


  if((distancia>50)&& (distancia<68))
  {
    digitalWrite(6,HIGH);
  }
  else
  {
     digitalWrite(6,LOW);
  }

  if((distancia>30)&& (distancia<48))
  {
    digitalWrite(7,HIGH);
  }
  else
  {
     digitalWrite(7,LOW);
  }


  if((distancia>10)&& (distancia<28))
  {
    digitalWrite(8,HIGH);
  }
  else
  {
     digitalWrite(8,LOW);
  }

  if((distancia>1)&& (distancia<8))
  {
    digitalWrite(9,HIGH);
  }
  else
  {
     digitalWrite(9,LOW);
  }
  
}
