int flame_sensor = 7;
int led=42;

void setup() {
pinMode(flame_sensor,INPUT);
pinMode(led,OUTPUT);
}
void loop() {
int FlameDetected = digitalRead(flame_sensor);
if(FlameDetected==1)
{
  Serial.println("Flame is detected");
  digitalWrite(led,HIGH);
}
else
{
  Serial.println("Flame is not detected");
  digitalWrite(led,LOW);
}
delay(1000);
}
