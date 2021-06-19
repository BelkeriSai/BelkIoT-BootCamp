
const int buzzer = 27;  
const int freq = 5000;
const int channel = 0;
const int res = 8; //resolution
 
void setup(){
  ledcSetup(channel, freq, res);
  
  // attach the channel to the GPIO to be controlled
  ledcAttachPin(buzzer, channel);
}
 
void loop(){
  ledcWrite(channel, 255);
  delay(1000);
  ledcWrite(channel, 180);
  delay(1000);
  ledcWrite(channel, 100);
  delay(1000);
  
//  for(int dutyCycle = 0; dutyCycle <= 255; dutyCycle++){   
//    ledcWrite(channel, dutyCycle);
//    delay(15);
//  }
//
//  // decrease the LED brightness
//  for(int dutyCycle = 255; dutyCycle >= 0; dutyCycle--){
//    ledcWrite(channel, dutyCycle);   
//    delay(15);
//  }
}
