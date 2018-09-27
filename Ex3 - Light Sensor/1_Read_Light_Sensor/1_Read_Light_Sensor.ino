/*
  Read Light Sensor
  
  Read Value Light from Light Sensor

  Schematic:
  Light Sensor <---> A0

  =>
  readAnalog(A0); 

  This example code is in the public domain.
  http://www.lophocvui.com/
*/
void setup() {
  // Setup Serial Baud rate
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  float light = analogRead(A0); // Value From 0 to 1023
  Serial.print("Light: "); 
  Serial.println(light);
  delay(100);
}
