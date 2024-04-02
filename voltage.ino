void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 1:
  int sensorValue = analogRead(A1);
  // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
  float voltage = sensorValue * (5.0 / 1023.0);
  // print out the value you read:
  if(sensorValue >= 0){
      Serial.println("Voltage: "+voltage);
      Serial.println("Sensor Values: "+sensorVal); //checks to make sure that sensor is returning data
  }  
  else{
    Serial.println("Sensor is not positioned correctly/needs changing");
  }
 
}
