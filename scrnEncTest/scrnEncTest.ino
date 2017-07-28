#include <Encoder.h>
#include <LiquidCrystal.h>

LiquidCrystal lcd(7,6,5,4,3,2);

//Initiate lcd and setup encoder
void setup(){
	lcd.begin(16,2);
	int encEnt=10;
	pinMode(encEnt,INPUT_PULLUP);
}

//Set some global variables
Encoder menuCntrl(8,9);
const int encEnt = 10;
long encPos = -999;
int page = 0;
int item = 1;
int outValue = 1;


//Loop it up. Here come some lines of code, brah.	
void loop(){
        long newPos = menuCntrl.read();
        int encPush = digitalRead(encEnt);
if(page==0){
	lcd.setCursor(0,0);	
	lcd.clear();
	lcd.write("joshcerrilight");
	delay(50);	
	if(encPush==0){
		page=1;
	}		
}

if(page==1){
	lcd.setCursor(0,0);
	lcd.clear();
	lcd.write("Intensity");
	delay(50);
	if(encPush==0){
		page=1.1;
	}
}

}
