/*
  Buzzer Basic
  
  Turn ON/OFF Buzzer

  Schematic:
  Cathode_Buzzer(-) <---> 0 V
  Anode_Buzzer  (+) <---> D8

  =>
  D = 1 (true, 3.3V) : Buzzer ON
  D = 0 (false, 0V)  : Buzzer OFF 

  This example code is in the public domain.
  http://www.lophocvui.com/
*/
#define BUZZER D8
#define ON  1
#define OFF 0

void setup() {
  // Setup BUZZER to OUTPUT PIN
  pinMode(BUZZER, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  // Buzzer basic 1
  for(int i=0; i<5; i++)
  {
    digitalWrite(BUZZER, ON);
    delay(1000);
    digitalWrite(BUZZER, OFF);
    delay(1000);
  }

  // Buzzer basic 2
  for(int i=0; i<3; i++)
  {
    digitalWrite(BUZZER, ON);
    delay(200);
    digitalWrite(BUZZER, OFF);
    delay(50);
  }
  digitalWrite(BUZZER, ON);
  delay(600);
  digitalWrite(BUZZER, OFF);
  delay(50);
  digitalWrite(BUZZER, ON);
  delay(200);
  digitalWrite(BUZZER, OFF);
  delay(50);
}
