#include <Encoder.h>
#include <LiquidCrystal.h>

LiquidCrystal lcd(7,6,5,4,3,2);

void setup(){
	lcd.begin(16,2);
	lcd.setCursor(0,0);
	int encEnt=10;
	pinMode(encEnt,INPUT_PULLUP);
        

}
Encoder menuCntrl(8,9);
const int encEnt = 10;
long encPos = -999;
	
void loop(){
        long newPos = menuCntrl.read();
        int encPush = digitalRead(encEnt);
   
           if(newPos < 100){
            if(newPos %4 == 0){
              if(newPos > encPos){
                lcd.clear();
	        lcd.print("RIGHT BUTTSTUFF");
                encPos=newPos;
            }
               if(newPos < encPos){
                 lcd.clear();
                 lcd.print("LEFT BUTTSTUFF");
                 encPos=newPos;
             }               
           if(newPos>=96){
              menuCntrl.write(0);
           }
           if(newPos<=-96){
             menuCntrl.write(0);
           }
           if(encPush == LOW){
              lcd.clear();
              lcd.write("NO BUTT STUFF 4U");              
              delay(1500);
             lcd.clear();
            lcd.print("GOTCHA BITCH!!");
           } 
           
             }
         
}
}

