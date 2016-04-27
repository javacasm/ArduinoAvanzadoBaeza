void setup() {
  // put your setup code here, to run once:

}


void palante()
{
  // mover motores
}


void patras()
{
  // mover motores patras
}

void derecha()
{

  
}


void izqdierda()
{
  
}

int minimaDistacinaSeguridad=20;
boolean hayObstaculo(int distanciaSeguridad)
{
  int distancia=mideDistancia();
  if(distancia<distanciaSeguridad)
    return true;
  else
    return false;
}
int mideDistancia()
{   return 25; }

void loop() {

  if( hayObstaculo(10) )
  {
    patras();
    delay(20);
    derecha();
    delay(40);
  }
  else
  {
    palante();
  }
}
