int ldr_sensor=7;
int buzzer=6;
void setup() {
  // put your setup code here, to run once:
pinMode(buzzer,OUTPUT);
pinMode(ldr_sensor,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int data=digitalRead(ldr_sensor);
Serial.println(data);
if (data==1)
{
  digitalWrite(buzzer,HIGH);
  Serial.println("Light is Detected");
}
else
{
  digitalWrite(buzzer,LOW);
  Serial.println("Light is Not detected");
}
delay(1000);
}
