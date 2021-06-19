const int relay = 26;

void setup() {
  Serial.begin(9600);
  pinMode(relay, OUTPUT);
}

void loop() {
  digitalWrite(relay, LOW);
  delay(3000);
  digitalWrite(relay, HIGH);
  delay(3000);
}
