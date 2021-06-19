const int BuzzerPin = 27;

const int freq = 3000;
const int channel = 0;
const int res = 0;

int Si2 =1975;
int LaS2=1864;
int La2= 1760;
int SolS2=1661;
int Sol2=1567;
int FaS2=1479;
int Fa2= 1396;
int Mi2= 1318;
int ReS2=1244;
int Re2= 1174;
int DoS2=1108;
int Do2= 1046;

// Low Octave
int Si = 987;
int LaS= 932;
int La = 880;
int SolS=830;
int Sol= 783;
int FaS= 739;
int Fa=  698;
int Mi=  659;
int ReS= 622;
int Re = 587;
int DoS =554;
int Do = 523;

// define the notes
int rounda=0;
int roundp=0;
int white= 0;
int whitep=0;
int black=0;  
int blackp=0;
int quaver=0;
int quaverp =0;
int semiquaver=0;
int semiquaverp=0;
int bpm= 120;
void setup(){
      pinMode(BuzzerPin,OUTPUT);
      
      ledcSetup(freq, channel, res);
      ledcAttachPin(BuzzerPin, channel);
      
      black= 35000/bpm; 
      blackp=black*1.5;
      white= black*2;
      whitep=white*1.5;
      rounda= black*4;
      roundp= rounda*1.5;
      quaver= black/2;
      quaverp=quaver*1.5;
      semiquaver= black/4;
      semiquaverp=semiquaver*1.5;

}
void loop(){
  
  ledcWriteTone(channel,black);
  delay(black+50);
  ledcWriteTone(channel,black);
  delay(black+50);
  ledcWriteTone(channel,black);
  delay(black+50);
  ledcWriteTone(channel,black);
  delay(black+50);
  ledcWriteTone(channel,black);
  
  delay(2*white+50);
    
  ledcWriteTone(channel,black);
  delay(black+50);
  ledcWriteTone(channel,black);
  delay(black+50);
  ledcWriteTone(channel,black);
  delay(black+50);
  ledcWriteTone(channel,black);
  delay(black+50);
  ledcWriteTone(channel,black);
  
  delay(2*white+50);
  
  ledcWriteTone(channel,black);
  delay(black+50);
  ledcWriteTone(channel,black);
  delay(black+50);
  ledcWriteTone(channel,black);
  delay(black+50);
  ledcWriteTone(channel,white*1.3);
  delay(2*black+50);
  
  ledcWriteTone(channel,black);
  delay(black+50);
  ledcWriteTone(channel,black);
  delay(black+50);
  ledcWriteTone(channel,white*1.3);
  delay(2*black+50);
  
  ledcWriteTone(channel,black);
  delay(black+50);
  ledcWriteTone(channel,black);
  delay(black+50);
  ledcWriteTone(channel,black);
  delay(white+50);
  ledcWriteTone(channel,black);
  delay(white+100);
  
  ledcWriteTone(channel,black);
  delay(white+50);
  ledcWriteTone(channel,black);
  delay(black+50);
  ledcWriteTone(channel,black);
  delay(black+50);
  ledcWriteTone(channel,black);
  delay(black+50);
  ledcWriteTone(channel,white*1.3);
  delay(rounda+100);
  
  ledcWriteTone(channel,black);
  delay(black+50);
  ledcWriteTone(channel,black);
  delay(black+50);
  ledcWriteTone(channel,black);
  delay(black+50);
  ledcWriteTone(channel,black);
  delay(black+50);
  ledcWriteTone(channel,white*1.3);
  delay(rounda+100);
  
  ledcWriteTone(channel,black);
  delay(black+50);
  ledcWriteTone(channel,black);
  delay(black+50);
   ledcWriteTone(channel,black);
  delay(black+50);
  ledcWriteTone(channel,white*1.3);
  delay(white+50);
  ledcWriteTone(channel,white*1.3);
  delay(white+50);
  ledcWriteTone(channel,white*1.3);
  delay(white+50);
  ledcWriteTone(channel,white*1.3);
  delay(white+50);
  ledcWriteTone(channel,rounda*1.3);
  delay(rounda+50);
  
}
