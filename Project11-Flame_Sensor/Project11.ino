int flame=0;
int Beep=11;
int val=0;

void setup() {
  pinMode(Beep, OUTPUT);
  pinMode(flame, INPUT);
  Serial.begin(9600);
}

void loop() {
val=analogRead(flame);
Serial.println(val);
if(val>=600)
  {  
   digitalWrite(Beep,HIGH); 
   }
   else 
   {  
    digitalWrite(Beep,LOW); 
    }
   delay(500); 
}
