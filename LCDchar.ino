/*
  Writing special characters like hearts to a 16X2 text LCD 
  Draw your own characters or use existing ones found on:
  http://www.quinapalus.com/hd44780udg.html

  
 */

// include the library code:
#include <LiquidCrystal.h>


int a =1;



// the pin wirinf from the lcd to the Arduino
LiquidCrystal lcd(7, 8, 9, 10, 11, 12);

//Character in hex

//uint8_t filledHeart [8] = {0x0,0xa,0x1f,0x1f,0xe,0x4,0x0};
uint8_t hollowHeart [8] = {0x0,0xa,0x15,0x11,0xa,0x4,0x0};
//uint8_t babyMonster [8] = {0x1,0x3,0x6,0xf,0x1a,0xf,0x7};
//uint8_t teddyBear   [8] = {0x1b,0x11,0xa,0x0,0x15,0xe,0x0,0x0};
uint8_t littleMan   [8] = {0xe,0xe,0x4,0x1f,0x4,0x4,0xa,0x11};



void setup() {
  
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  
  // Print a message to the LCD.
  
  lcd.print("Arduino LCD Tutorial coming soon!");
  
  //create symbol mentioned above
  lcd.createChar(1, hollowHeart);
  //lcd.createChar(2, filledHeart);
  //lcd.createChar(3, babyMonster);
  //lcd.createChar(4, teddyBear);
  lcd.createChar(5, littleMan);
  
  
 
}

void loop() {
  
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
 
 if (a==1);{
  lcd.setCursor (0,0);
 lcd.scrollDisplayLeft();
 delay(190);
  
  }
 
 
  
  
  lcd.setCursor(0, 1);

  //display symbol (note: byte # must match create number)
  
  lcd.write(byte(1));
  //lcd.write(byte(2));
  //lcd.write(byte(3));
  //lcd.write(byte(4));
  lcd.write(byte(5));

 
  

 
 

 
 
}
