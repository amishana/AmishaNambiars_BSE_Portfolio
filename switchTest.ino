const int switchPin = 34;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(switchPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(switchPin))
  {
      Serial.println("ON");
  }
  
  else
  {
    Serial.println("OFF");
  }
}
