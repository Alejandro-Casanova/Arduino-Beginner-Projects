int redled=11;
int greenled=10;
int blueled=9;

int val;

void setup() {
  pinMode(redled, OUTPUT);
  pinMode(blueled, OUTPUT);
  pinMode(greenled, OUTPUT);
  Serial.begin(9600);
}

void loop() {
for(val=0; val<255; val++)
  {
   analogWrite(11, val);
   analogWrite(greenled, 255-val);
   analogWrite(blueled,128-val);
   delay(1); 
  }
for(val=255;val>0;val--){
  analogWrite(11, val);
  analogWrite(10, 255-val);
  analogWrite(9, 128-val);
  delay(1);
}
 Serial.println(val, DEC);
}
