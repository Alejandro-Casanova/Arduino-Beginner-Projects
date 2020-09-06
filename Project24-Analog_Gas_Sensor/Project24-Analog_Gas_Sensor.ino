void setup()
{
  Serial.begin(9600); //Set serial baud rate to 9600 bps
}
void loop()
{
int val;
val=analogRead(1);//Read Gas value from analog 1
Serial.println(val,DEC);//Print the value to serial port
delay(100);
}
