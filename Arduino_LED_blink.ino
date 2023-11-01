//Arduino MEGA-2560
void setup() {
  DDRB=0x80; //PORTB7(pin 13) as output; DDR-Data direction register
  PORTB=0x00;
}

void loop() {
  PORTB=0X80; //LED at pin13 is ON
  delay(500);// no argument as fraction ;delay for 500 ms
  PORTB=0x00;//LED AT PIN 13 IS OFF
  delay(500);
}//D7 bit has to be 1
