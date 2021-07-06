

#include <Servo.h>

Servo myservo1; 
Servo myservo2; 
Servo myservo3; 
Servo myservo4; 
Servo myservo5; 

int val1,val2,val3,val4,val5;

void setup() {
  myservo1.attach(8);
  myservo2.attach(9);
  myservo3.attach(10);
  myservo4.attach(11);
  myservo5.attach(12);
}

void loop() {
  val1 = analogRead(0);   
  val2 = analogRead(1);          
  val3 = analogRead(2);          
  val4 = analogRead(3);            
  val5 = analogRead(4);      
      
    val1 = map(val1, 0, 1023, 0, 180);     
  myservo1.write(val1);   
         
    val2 = map(val2, 0, 1023, 0, 180);     
  myservo2.write(val2);       
  
    val3 = map(val3, 0, 1023, 0, 180);     
  myservo3.write(val3);       
  
    val4 = map(val4, 0, 1023, 0, 180);     
  myservo4.write(val4);       

    val5 = map(val5, 0, 1023, 0, 180);     
  myservo5.write(val5);       
  delay(15);
}
