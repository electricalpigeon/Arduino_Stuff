//Arduino MEGA-2560
//Part-1
//Board LED blink
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


//Part-2
//External LED blink
void setup() {
  DDRA=0x01; //PA0 as output pin
  PORTA=0;
}

void loop() {
  PORTA=0X01; //LED  ON
  delay(250);// no argument as fraction ;delay for 250 ms
  PORTA=0;//LED  OFF
  delay(250);
  
}//D7 bit has to be 1
