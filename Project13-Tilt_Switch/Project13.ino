int buzzer=7;

void setup() {
  pinMode(8, OUTPUT);
}

void loop() {
 int i;
  while(1){
   i=analogRead(5);
   if(i>512){
    digitalWrite(8,LOW);
   }
   else{
    digitalWrite(8,HIGH);
   }
  }
}
