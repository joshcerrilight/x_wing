/* Encoder Library - Basic Example
 * http://www.pjrc.com/teensy/td_libs_Encoder.html
 *
 * This example code is in the public domain.
 */

#include <Encoder.h>


// Change these two numbers to the pins connected to your encoder.
//   Best Performance: both pins have interrupt capability
//   Good Performance: only the first pin has interrupt capability
//   Low Performance:  neither pin has interrupt capability
Encoder Enc1(2, 6);
//   avoid using pins with LEDs attached

void setup() {
  Serial.begin(9600);
}

long EncPos  = -999;

void loop() {
  long EncPosNew;
  EncPosNew = Enc1.read();
  if (EncPosNew != EncPos){
    if(EncPosNew %4 ==0){
      if(EncPosNew > EncPos){
        EncPos = EncPosNew;
        Serial.print(1);
    }
    if(EncPosNew < EncPos){
      EncPos = EncPosNew;
      Serial.print(-1);
    }
    }
  }
}

