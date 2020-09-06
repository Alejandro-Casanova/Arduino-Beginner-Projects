int ledpin=11;
int inpin=7;
int val=0;

void setup() {
  pinMode(ledpin,OUTPUT);
  pinMode(inpin, INPUT);
  Serial.begin(9600);
}

void loop() {
    val=digitalRead(inpin);
    if(val==LOW){
      digitalWrite(ledpin,LOW);
    }
    else{
    digitalWrite(ledpin, HIGH);
    }
}
