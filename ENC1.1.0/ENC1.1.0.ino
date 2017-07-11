///Programming Wing Encoder Input Module///

#include <Encoder.h>

Encoder Enc1(2,3);
Encoder Enc2(4,5);
Encoder Enc3(6.7);
Encoder Enc4(8,9);

void setup() {
  Serial.begin(9600);
}

long Enc1Pos  = -999;
long Enc2Pos  = -999;
long Enc3Pos  = -999;
long Enc4Pos  = -999;


void loop(){
	long Enc1PosNew;
	long Enc2PosNew;
	long Enc3PosNew;
	long Enc4PosNew;
	Enc1PosNew = Enc1.read();
	Enc2PosNew = Enc2.read();
	Enc3PosNew = Enc3.read();
	Enc4PosNew = Enc4.read();
	if (Enc1PosNew != Enc1Pos){
		if(EncPos1New %4 ==0){
			if(Enc1PosNew > Enc1Pos){
				Enc1Pos = Enc1PosNew;
				Serial.print(11);
			}
			if(Enc1PosNew < Enc1Pos){
				Enc1Pos = Enc1PosNew;
				Serial.print(10);
			}
		}
	}
	
	if(Enc2PosNew!=Enc2Pos){
		if(EncPos2New%4==0){
			if(Enc2PosNew>Enc2Pos){
				Enc2Pos=Enc2PosNew;
				Serial.print(21);
			{
			if(Enc2PosNew<Enc2Pos){
				Enc2Pos=Enc2PosNew;
				Serial.print(20);
			}
		}
	}

	if(Enc3PosNew!=Enc3Pos){
		if(EncPos3New&4==0){
			if(Enc3PosNew>Enc3Pos){
				Enc3Pos=Enc3PosNew;
				Serial.print(31);
			}
			if(Enc3PosNew<Enc3Pos){
				Enc3Pos=Enc3PosNew;
				Serial.print(30);
			}
		}
	}
	if(Enc4PosNew!=Enc4Pos){
		if(Enc4PosNew%4==0){
			if(Enc4PosNew>Enc4Pos){
				Enc4Pos=Enc4PosNew;
				Serial.print(41);
			}
			if(Enc4PosNew<Enc4Pos){
				Enc4Pos=Enc4PosNew;
				Serial.print(40);
			}
		}
	}
			

}

