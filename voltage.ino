void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int sensorValue = analogRead(A0);
  int finalVal = sensorValue * (5.0 / 1023.0);
  // print out the value you read:
  Serial.println("Voltage:"+finalVal);
  delay(100);  // delay in between reads for stability
}
