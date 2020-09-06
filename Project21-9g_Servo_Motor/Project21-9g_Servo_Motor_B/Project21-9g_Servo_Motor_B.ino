#include <Servo.h>
Servo myservo;// define servo variable name
int val;
void setup()
{
  Serial.begin(9600);
  myservo.attach(9);// select servo pin(9 or 10)
}
void loop()
{
  val=Serial.read();
  if(val>='0'&&val<='9')
{
  val=val-'0';
  Serial.println(val, DEC);
  val=map(val, 0, 9, 0, 180);
  Serial.println(val, DEC);
  myservo.write(val);// set rotation angle of the motor
}}
