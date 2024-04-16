

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  double sensorValue = analogRead(A0);
  double finalVal = sensorValue * (5.0 / 1023.0);
  // print out the value you read:
  Serial.println(finalVal);
  delay(1000);  // delay in between reads for stability
}
