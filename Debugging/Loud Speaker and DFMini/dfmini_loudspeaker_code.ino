#include <DFRobotDFPlayerMini.h>
#include "mp3tf16p.h"

MP3Player mp3(11,10); // MP3Player mp3(TX,RX); 

void setup() {
  Serial.begin(9600);
  mp3.initialize();
  mp3.playTrackNumber(3, 30);
}

void loop() {
  // put your main code here, to run repeatedly:
}