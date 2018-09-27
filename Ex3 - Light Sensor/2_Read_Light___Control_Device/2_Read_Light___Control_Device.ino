/*
  Read Light Sensor
  
  Read Value Light from Light Sensor

  Schematic:
  Light Sensor <---> A0
  Anode Led    <---> D0

  =>
  readAnalog(A0); -> Control D0 

  This example code is in the public domain.
  http://www.lophocvui.com/
*/
#define LED D0
#define ON  1
#define OFF 0

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(LED, OUTPUT);
  digitalWrite(LED, OFF);  
}

bool led_status = OFF;  // Status off Led
bool led_status_old = OFF;  // Old status off Led

void loop() {
  // put your main code here, to run repeatedly:
  float light = analogRead(A0);
  if(light<200)
    led_status = ON;
  else
    led_status = OFF;

  if(led_status!=led_status_old)
  {
    digitalWrite(LED, led_status);
    led_status_old = led_status;
    Serial.print("LED -> ");
    Serial.println(led_status ? "ON" : "OFF");
  }
  delay(100);
}
