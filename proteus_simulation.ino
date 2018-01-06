          
            /*ARDUINO HOCAM PROTEUS SIMULASYON*/


void setup() {

pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
}

void loop() {
  
digitalWrite(2,1);// digital pin2 HIGH
delay(50);
digitalWrite(3,1);
delay(50);
digitalWrite(4,1);
delay(50);
digitalWrite(5,1);
delay(50);
digitalWrite(5,0);
delay(50);
digitalWrite(4,0);
delay(50);
digitalWrite(3,0);
delay(50);
digitalWrite(2,0);
delay(50);

}
