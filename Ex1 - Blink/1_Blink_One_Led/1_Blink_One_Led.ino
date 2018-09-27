/*
  Blink One Led
  
  Turns an LED on for one second, then off for one second, repeatedly.

  Schematic:
  Cathode_Led (-) <---> 0 V
  Anode_Led   (+) <---> D0

  =>
  D0 = 1 (true, 3.3V) : Led ON
  D0 = 0 (false, 0V)  : Led OFF 

  This example code is in the public domain.
  http://www.lophocvui.com/
*/

#define LED D0  // Define LED = D0
#define OFF 0   // Define OFF = 0
#define ON  1   // Define ON  = 1

void setup() {
  // Setup LED to OUTPUT PIN
  pinMode(LED, OUTPUT);

}

void loop() {
  // Program at here will run repeatedly:
  digitalWrite(LED, ON);  // Set Led ON
  delay(1000);            // Wait for 1 sec
  digitalWrite(LED, OFF); // Set Led OFF
  delay(1000);            // Wait for 1 sec
}
