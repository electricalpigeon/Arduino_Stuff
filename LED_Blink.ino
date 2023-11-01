//Arduino MEGA-2560
//Part-1
//Board LED and External LED Blink together
void setup() {
  DDRA=0x01; //PA0 as output pin
  PORTA=0;
  DDRB=0x80; //PORTB7(pin 13) as output; DDR-Data direction register
  PORTB=0x00;
}

void loop() {
  (PORTA=0X01) |(PORTB=0X80); //LED  ON
  delay(250);// no argument as fraction ;delay for 500 ms
   //LED at pin13 is ON
  PORTA=0;//LED  OFF
  //delay(500);
  PORTB=0x00;//LED AT PIN 13 IS OFF
  delay(250);}


//Part-2
//Board LED and External LED blink alternate
void setup() {
  DDRA=0x01; //Pin 22 as output pin
  DDRB=1<<7; //PORTB7(pin 13) as output; DDR-Data direction register
  PORTA=0;
  
  PORTB=0;
}

void loop() {
  PORTA=0; //Pin 22 OFF
  PORTB=0X80;//PIN 13 ON
  delay(300);// no argument as fraction ;delay for 500 ms  
  PORTA=0x01;//PIN 22 ON  
  PORTB=0;//LED AT PIN 13 IS OFF
  delay(300);}
