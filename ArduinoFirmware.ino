int calibrationTime = 30;

long unsigned int lowIn;
long unsigned int pause = 5000; 
 
boolean lockLow = true;
boolean takeLowTime; 
 
int pirPin = 3;
int ledPin = 13;
int buzzer = 6; 

void setup(){
  Serial.begin(9600);
  pinMode(pirPin, INPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(buzzer, OUTPUT);
  
  digitalWrite(pirPin, LOW);
  digitalWrite(buzzer, LOW);
 
    for(int i = 0; i < calibrationTime; i++){
      delay(1000);
      }
    delay(50);
  }
 
void loop(){
     if(digitalRead(pirPin) == HIGH){
       digitalWrite(ledPin, HIGH);
       digitalWrite(buzzer, HIGH);
    
       if(lockLow){
         lockLow = false;           
         
         Serial.println("Intrusion");             
         beep(150);
         delay(50);
         }        
         takeLowTime = true;
       }
 
     if(digitalRead(pirPin) == LOW){      
       digitalWrite(ledPin, LOW);
 
       if(takeLowTime){
        lowIn = millis();         
        takeLowTime = false;
        }
        
       if(!lockLow && millis() - lowIn > pause){ 
           
           lockLow = true;
           delay(50);
           }
       }
  }

void beep(unsigned char delayms) {
      digitalWrite(buzzer, 150);
      delay(delayms);
      digitalWrite(buzzer, 0);
      delay(delayms);
}
