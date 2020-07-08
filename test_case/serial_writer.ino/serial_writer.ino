int i = 0;
void setup() {
  Serial.begin(9600);
}

void loop() {
  i = (i+1) % 1000;
  Serial.println(i);
  delay(1000);
}
