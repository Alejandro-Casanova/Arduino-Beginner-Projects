int redled=10;
int yellowled=7;
int blueled=4;

void setup() {
pinMode(redled, OUTPUT);
pinMode(yellowled, OUTPUT);
pinMode(blueled, OUTPUT);

}

void loop() {
digitalWrite(redled, HIGH);
delay(1000);
digitalWrite(redled, LOW);

for(int i=0;i<3;i++){
  delay(250);
  digitalWrite(yellowled, HIGH);
  delay(250);
  digitalWrite(yellowled, LOW);
}

delay(250);
digitalWrite(blueled, HIGH);
delay(1000);
digitalWrite(blueled, LOW);


}
