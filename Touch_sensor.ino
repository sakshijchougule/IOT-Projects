int touch_sensor=7;
int buzzer=6;
void setup() {
  // put your setup code here, to run once:
pinMode(buzzer,OUTPUT);
pinMode(touch_sensor,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int data=digitalRead(touch_sensor);
Serial.println(data);
if (data==1)
{
  digitalWrite(buzzer,HIGH);
  Serial.println("Touch is detected");
}
else
{
  digitalWrite(buzzer,LOW);
  Serial.println("Touch is not detected");
}
delay(1000);
}
