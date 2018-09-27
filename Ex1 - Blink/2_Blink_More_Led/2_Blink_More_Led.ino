/*
  Blink More Leds
  
  Create some effects for three LED on Board

  Schematic:
  Cathode_Leds(-) <---> 0 V
  Anode_Led_1 (+) <---> D0
  Anode_Led_2 (+) <---> D5
  Anode_Led_3 (+) <---> D6

  =>
  D = 1 (true, 3.3V) : Led ON
  D = 0 (false, 0V)  : Led OFF 

  This example code is in the public domain.
  http://www.lophocvui.com/
*/

#define LED_1 D0  // Define LED_1 = D0
#define LED_2 D5  // Define LED_2 = D5
#define LED_3 D6  // Define LED_3 = D6
#define ON  1     // Define ON    = 1
#define OFF 0     // Define OFF   = 0

void setup() {
  // Setup LEDs to OUTPUT PIN
  pinMode(LED_1, OUTPUT);
  pinMode(LED_2, OUTPUT);
  pinMode(LED_3, OUTPUT);
}

void loop() {
  // Program at here will run repeatedly:

  // Blink Led
  for(int i=0; i<5; i++)
  {
    digitalWrite(LED_1, ON);    // Set Led_1 ON
    digitalWrite(LED_2, ON);    // Set Led_2 ON
    digitalWrite(LED_3, ON);    // Set Led_3 ON
    delay(1000);                // Wait for 1 sec
    digitalWrite(LED_1, OFF);   // Set Led_1 OFF
    digitalWrite(LED_2, OFF);   // Set Led_1 OFF
    digitalWrite(LED_3, OFF);   // Set Led_1 OFF
    delay(1000);                // Wait for 1 sec
  }
  
  // Light Queue ON
  digitalWrite(LED_1, ON);
  delay(1000);
  digitalWrite(LED_2, ON);
  delay(1000);
  digitalWrite(LED_3, ON);
  delay(1000);

  // Light Queue OFF
  digitalWrite(LED_1, OFF);
  delay(1000);
  digitalWrite(LED_2, OFF);
  delay(1000);
  digitalWrite(LED_3, OFF);
  delay(1000);
 
}
