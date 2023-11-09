#Simple Security system with buzzer
#Made using Arduino Uno(1),Solderless Breadboard(1),Ultrasonic Detector Sensor HC-SR04  (1),Buzzer(1)
#Trig pin to D-6
#Vcc pin to 5V
#Echo pin to D-5
#Gnd pin to Gnd
#Buzzer positive to D-2


#define trigPin 6
#define echoPin 5
#define buzzer 2
float new_delay;
void setup() {
  Serial.begin(9600);        //Connection set up
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  pinMode(buzzer,OUTPUT);
  
}

void loop() {
  long duration,distance;
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  duration=pulseIn(echoPin,HIGH);
  distance=(duration/2)*0.034;
  new_delay=(distance*3)+30;
  Serial.print(distance);
  Serial.print(" cm");
  if (distance <30){      //detects and obstacle within 30 cm
    digitalWrite(buzzer,HIGH);
    delay(new_delay);
    digitalWrite(buzzer,LOW);
      }
  else{
    digitalWrite(buzzer,LOW);
  }
  delay(200);
}
