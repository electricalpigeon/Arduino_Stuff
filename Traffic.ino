//Tried simulating traffic signal using Arduino UNO
//Used RED,YELLOW and GREEN LEDs- 2 of each
//Used standard solderless breadboard
//Used a Buzzer when Red Light ON
//Used standard 250 ohm resistors
//Connections made in a column are connected
//Randomly generated lights for fun :-)
//Place from L-R : R,Y,G,R,Y,G

int buzzerpin=1;
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(12, OUTPUT);    //red
  pinMode(10, OUTPUT);    //yellow
  pinMode(8, OUTPUT);    //green
  pinMode(6, OUTPUT);    //red
  pinMode(4, OUTPUT);    //yellow
  pinMode(2, OUTPUT);    //green
  pinMode(buzzerpin,OUTPUT); //buzzer
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(12, HIGH);  // turn the red LED on (HIGH is the voltage level)
  digitalWrite(6, HIGH);  // turn the red LED on (HIGH is the voltage level)
  digitalWrite(buzzerpin,HIGH);//turn the buzzer off
  delay(500);
  digitalWrite(buzzerpin,LOW);
  digitalWrite(12, LOW);  // turn the red LED off (LOW is the voltage level)
  digitalWrite(6, LOW);  // turn the red LED off (LOW is the voltage level)
  
  
  digitalWrite(10, HIGH);  // turn the  yellow LED on (HIGH is the voltage level)
  digitalWrite(2, HIGH);  // turn the green LED on (HIGH is the voltage level)
  delay(500)
  digitalWrite(10, LOW);  // turn the  yellow LED off (LOW is the voltage level)
  digitalWrite(2, LOW);  // turn the green LED off (LOW is the voltage level)
  
  digitalWrite(8, HIGH);  // turn the green LED on (HIGH is the voltage level)
  digitalWrite(4, HIGH);  // turn the yellow LED on (HIGH is the voltage level)
  delay(500);
  digitalWrite(8, LOW);  // turn the green LED off (LOW is the voltage level)
  digitalWrite(4, LOW);  // turn the yellow LED off (LOW is the voltage level)


  //Random
  digitalWrite(12, HIGH);  // turn the red LED on (HIGH is the voltage level)
  digitalWrite(10, HIGH);  // turn the  yellow LED on (HIGH is the voltage level)
  digitalWrite(8, HIGH);  // turn the green LED on (HIGH is the voltage level)
  digitalWrite(6, HIGH);  // turn the red LED on (HIGH is the voltage level)
  digitalWrite(4, HIGH);  // turn the yellow LED on (HIGH is the voltage level)
  digitalWrite(2, HIGH);  // turn the green LED on (HIGH is the voltage level)

  delay(500);
 
  digitalWrite(12, LOW);  // turn the red LED off (LOW is the voltage level)
  digitalWrite(6, LOW);  // turn the red LED off (LOW is the voltage level)
  digitalWrite(10, LOW);  // turn the  yellow LED off (LOW is the voltage level)
  digitalWrite(2, LOW);  // turn the green LED off (LOW is the voltage level)
  digitalWrite(8, LOW);  // turn the green LED off (LOW is the voltage level)
  digitalWrite(4, LOW);  // turn the yellow LED off (LOW is the voltage level)

  delay(1000);
}

