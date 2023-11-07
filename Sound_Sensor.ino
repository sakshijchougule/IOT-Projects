int sound_sensor=1;
void setup() {
  // put your setup code here, to run once:
pinMode(sound_sensor,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int data=analogRead(sound_sensor);
int dB=(data+83.2073)/11.003;
Serial.println("sound in dB");
Serial.println(dB);

delay(100);
}