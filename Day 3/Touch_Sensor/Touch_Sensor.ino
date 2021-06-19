void setup() {
  Serial.begin(9600);
  pinMode(27, OUTPUT);
}

void loop() {
  int touch = 0;

  touch = touchRead(T4);

  Serial.print("The Touch Value is :");
  Serial.println(touch);

  if(touch < 40){
    Serial.println("DON'T TOUCH ME!!!");
    digitalWrite(27, HIGH);
    delay(2000);
    digitalWrite(27,LOW);
  }
  delay(500);
}
