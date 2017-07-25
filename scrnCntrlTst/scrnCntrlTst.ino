#include<LiquidCrystal.h>

LiquidCrystal lcd(7,6,5,4,3,2);

void setup(){
	lcd.begin(16, 2);
}

void loop(){
	lcd.setCursor(0,0);
	lcd.print("BUTT STUFF");
	delay(500);
	lcd.setCursor(0,1);
	lcd.print("WORLD CHAMPION!");	
	delay(1000);	
	for (int positionCounter  = 0; positionCounter < 14; positionCounter++){
		lcd.scrollDisplayLeft();
		delay(150);
	}
delay(1000);
lcd.clear();
delay(500);

}

