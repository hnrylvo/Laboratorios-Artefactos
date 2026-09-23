const int TOUCH_PIN = 32; 

void setup() {

  Serial.begin(115200);

  delay(1000);

  Serial.println("PRUEBA SENSOR TOUCH");
  Serial.println();
}

void loop() {

  // touchRead() lee el valor capacitivo del pin especificado
  int valorTouch = touchRead(TOUCH_PIN);

  Serial.print("Valor Touch: ");
  // Serial.println() imprime el valor y da un salto de línea
  Serial.println(valorTouch);

  delay(200);
}