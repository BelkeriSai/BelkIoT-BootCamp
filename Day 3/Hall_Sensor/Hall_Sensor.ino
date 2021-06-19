void setup() {
  Serial.begin(9600);
}

void loop() {
    int hallVal = 0;

    hallVal = hallRead();
 
    Serial.print("Hall sensor measurement is: ");
    Serial.println(hallVal); 
    delay(2000);

//    if(hallVal < 0){
//      Serial.println("Magnetic Field Detected");
//    }
}
