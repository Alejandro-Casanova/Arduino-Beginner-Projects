int buzzer=6;
int i;
void setup() {
  Serial.begin(9600);
  pinMode(buzzer, INPUT);
}

void loop() {
  i=analogRead(6);
  Serial.println("6 ");
  delay(50);
}
