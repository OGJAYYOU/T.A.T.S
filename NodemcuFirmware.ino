#include<SoftwareSerial.h>

SoftwareSerial mySerial(D1, D2); //black, red

void setup(){
  Serial.begin(115200);
  mySerial.begin(9600);
}

void loop(){
  String msg = mySerial.readStringUntil('\r');
Serial.println(msg);
}
