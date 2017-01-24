void setup() {
  pinMode(7,INPUT);
  Serial.begin(9600);
}

void loop() {
  if(digitalRead(7)){
    analogWrite(3, (int((0.49)*65)+125));
    Serial.println("Running");
    delay(20000);
    Serial.println("Stopped");
    analogWrite(3, (int((0)*60)+190));
  }
}
