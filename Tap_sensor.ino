const int tapPin = 2; // Define the GPIO pin where the tap sensor is connected
int tapCount = 0;     // A variable to keep track of tap counts

void setup() {
  Serial.begin(115200);
  pinMode(tapPin, INPUT);
  attachInterrupt(digitalPinToInterrupt(tapPin), tapDetected, RISING);
}

void loop() {
  // Your main loop code can go here if needed
}

void tapDetected() {
  // This function is called when a tap is detected
  tapCount++;
  Serial.print("Tap detected! Count: ");
  Serial.println(tapCount);
}
