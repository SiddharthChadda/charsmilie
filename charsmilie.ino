#include<LiquidCrystal.h>
LiquidCrystal lcd {13,12,7,6,5,4};
  byte smilie1[]={
  0b01110,
  0b10001,
  0b01110,
  0b00100,
  0b11111,
  0b00100,
  0b01110,
  0b11011,              
  };

    byte smilie2[]={
  0b01110,
  0b10001,
  0b01110,
  0b00100,
  0b11111,
  0b00100,
  0b00100,
  0b01110,              
  };

  
void setup() {
lcd.begin(16,2);
lcd.createChar(1,smilie1);
lcd.createChar(2,smilie2);

}

void loop() {

for(int i=0;i<16;i++)
{
   lcd.setCursor(i,1);
   if(i&1)
   {
   lcd.write(1);
   delay(1000);
   lcd.clear();
   }
   else{
   lcd.write(2);
   delay(1000);
   lcd.clear();
   }
  // put your main code here, to run repeatedly:
}
}
