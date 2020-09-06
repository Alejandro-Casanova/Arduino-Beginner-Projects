int BASE=2;
int NUM=6;

void setup() {
for(int i =BASE; i<BASE+NUM; i++){
  pinMode(i, OUTPUT); 
  }
}

void loop() {
  for(int i=BASE; i<BASE+NUM; i++){
  digitalWrite(i, LOW);
  delay(100);
  }
  for(int i=BASE; i<BASE+NUM; i++){
  digitalWrite(i, HIGH);
  delay(100);
  }
  // put your main code here, to run repeatedly:

}
