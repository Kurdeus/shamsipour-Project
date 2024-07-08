#include <Servo.h> //اضافه کردن کتابخانه

Servo servo_1;   // ساخت شی از کلاس سرو
Servo servo_2;   
Servo servo_3;  
Servo servo_4;   
Servo servo_5;   

int flex_1 = 0;  // تعریف پین ورودی سنسور
int flex_2 = 1;  
int flex_3 = 2;  
int flex_4 = 3;  
int flex_5 = 4;  

void setup()  
{
  Serial.begin(9600);
  servo_1.attach(5);    //تعیین پین سروو
  servo_2.attach(3); 
  servo_3.attach(9); 
  servo_4.attach(10);
  servo_5.attach(6); 

}


void loop()
{




  int flex_1_pos; 
  int servo_1_pos; 
  flex_1_pos = analogRead(flex_1); 
  
  servo_1_pos = map(flex_1_pos, 0, 1023, 0, 180); 
  servo_1.write(servo_1_pos);  
  Serial.println(flex_1_pos);
  //1st Finger





  int flex_2_pos;  
  int servo_2_pos;  
  flex_2_pos = analogRead(flex_2); 
  servo_2_pos = map(flex_2_pos, 0, 1023, 0, 180); 
  servo_2.write(servo_2_pos);
  // 2st Finger


  
  //Serial.println(servo_2_pos);
  

  int flex_3_pos;  
  int servo_3_pos;  
  flex_3_pos = analogRead(flex_3);
  servo_3_pos = map(flex_3_pos, 0, 1023, 0, 180);
  servo_3.write(servo_3_pos);
  // 3st Finger
  
 

  int flex_4_pos;  
  int servo_4_pos;  
  flex_4_pos = analogRead(flex_4); 
  servo_4_pos = map(flex_4_pos, 0, 1023, 0, 180);  
  servo_4.write(servo_4_pos);
  // 4st Finger
  

  int flex_5_pos;  
  int servo_5_pos;  
  flex_5_pos = analogRead(flex_5); 
  
  servo_5_pos = map(flex_5_pos, 0, 1023, 0, 180); 
  servo_5.write(servo_5_pos);
  // 5st Finger
 
 
}
