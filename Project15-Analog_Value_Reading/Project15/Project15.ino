int potpin=0;
int ledpin=13;
float val=0;
float real;
void setup() {
  Serial.begin(9600);
  pinMode(ledpin,OUTPUT);
}

void loop() {
  digitalWrite(ledpin,HIGH);// turn on the LED on pin 13
delay(50);// wait for 0.05 second
digitalWrite(ledpin,LOW);// turn off the LED on pin 13
delay(50);// wait for 0.05 second
val=analogRead(potpin);// read the analog value of analog pin 0, and assign it to val 
Serial.println(val);// display val’s value
real=(val*5/1023);
Serial.println("\t");
Serial.print(real, 4);
Serial.println(" V");
Serial.println("\t");
}
