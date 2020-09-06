  /*
# 0  ~300     dry soil
  # 300~700     humid soil
  # 700~950     in water
*/
 void setup(){
 Serial.begin(9600);
 }
 
void loop(){
 
  Serial.print("Moisture Sensor Value:");
  Serial.println(analogRead(1)); 
  delay(100);
}
