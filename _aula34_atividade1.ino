// C++ code
//
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 20, 4);

const int pinLedA = 13;
const char pinBotaoA = 8;
const int pinLedB = 11;
const char pinBotaoB = 7;

void setup() {
 lcd.init();
 lcd.backlight();
 lcd.setCursor(1, 0);
 lcd.print("Led A OFF");
 lcd.setCursor(1, 1);
 lcd.print("Led B OFF");
 lcd.setCursor(0, 0);
 pinMode(pinLedA, OUTPUT);
 pinMode(pinBotaoA, INPUT);
 pinMode(pinLedB, OUTPUT);
 pinMode(pinBotaoB,INPUT);
}


void loop() {
bool estadoBotaoA = digitalRead(pinBotaoA);
static bool estadoAnteriorBotaoA = 0;
static bool estadoLedA = 0; 

bool estadoBotaoB = digitalRead(pinBotaoB);
static bool estadoAnteriorBotaoB = 0;
static bool estadoLedB = 0; 
  
if(estadoBotaoA && !estadoAnteriorBotaoA)
{
//botao pressionado
 estadoLedA = !estadoLedA;
 digitalWrite(pinLedA, estadoLedA);
 lcd.setCursor (7,0);
 if(estadoLedA) lcd.print("ON ");
 else  lcd.print("OFF");
//botao solto
}estadoAnteriorBotaoA = estadoBotaoA;

  
if(estadoBotaoB && !estadoAnteriorBotaoB)
{
//botao pressionado
 estadoLedB = !estadoLedB;
 digitalWrite(pinLedB, estadoLedB);
 lcd.setCursor (7,1);
 if(estadoLedB) lcd.print("ON ");
 else  lcd.print("OFF");
//botao solto
}estadoAnteriorBotaoB = estadoBotaoB;

}
