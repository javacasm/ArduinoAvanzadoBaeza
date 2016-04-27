void setup() {
// Ojo!! Cada placa bluetooth puede usar distintas velocidades de conexión:
//  BT-Zum usa 19200
//  Las placas de bluetooth normales 9600
Serial.begin(19200); //Configurado para BT-Zum

}


void loop() {
  // Leemos los valores
  int iValorA0=analogRead(A0);
  int iValorA1=analogRead(A1);
  
  Serial.print(iValorA0);
  Serial.print(",");
  Serial.println(iValorA1);
}
