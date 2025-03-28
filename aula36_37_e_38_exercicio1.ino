#include <LiquidCrystal_I2C.h>
#define valorBotao1 0
#define valorBotao2 145
#define valorBotao3 329
#define valorBotao4 505
#define valorBotao5 741
#define pinLedVerde 9
#define pinLedVermelho 10


LiquidCrystal_I2C lcd (0x27, 16, 2);

//ao apertar botao 5 o display e led mudam de acordo com onde
//a seta esta posicionada
//o botao 3 diminui a intensidade e o 4 aumento


void setup()
{
 Serial.begin (9600);
 lcd.init();
 lcd.backlight();
 lcd.setCursor(1,0);
 lcd.print ("LED A OFF");
 lcd.setCursor(1,1);
 lcd.print ("LED B OFF");
 pinMode (pinLedVerde, OUTPUT);
 pinMode (pinLedVermelho, OUTPUT);
 
}

void loop()
{
 
 static bool posicao = 0;
 static bool estadoLedVerde = 0;
 static bool estadoLedVermelho = 0;
 static byte intensidadeLedVerde = 0;
 static byte intensidadeLedVermelho = 0;
 static bool alteracao = 0;
 
 
 
 //INICIO DOS TRATEMENTOS DOS BOTOES
 
 int valorLeitura = analogRead (A0);
 static int valorAnteriorLeitura = 1023;
 
 //BOTAO 1 PRESSIONADO
 if (valorAnteriorLeitura == 1023 && valorLeitura == valorBotao1)
 {
  posicao = 0; //posiçao da seta no display
  alteracao = 1;
 }
 
 
 //BOTAO 2 PRESSIONADO
 else if (valorAnteriorLeitura == 1023 &&
          valorLeitura >=valorBotao2 * 0.9 &&
          valorLeitura <=valorBotao2 * 1.1){
   //verfica a margem de erro, se o valor é maior que 90% e
   //menor que 110%
   posicao = 1;
   alteracao = 1;
 }

//BOTAO 3 PRESSEIONADO - diminuir intensidade
 else if (valorAnteriorLeitura == 1023 &&
          valorLeitura >=valorBotao3 * 0.9 &&
          valorLeitura <=valorBotao3 * 1.1){
   if (posicao == 0 && estadoLedVerde)
   {
    if (intensidadeLedVerde >0)//limitou de 0 a 100
    intensidadeLedVerde -=10; //decrementa 10
   }
   else if (posicao == 1 && estadoLedVermelho)
   {
     if (intensidadeLedVermelho >0)
     intensidadeLedVermelho -= 10;
   }
   alteracao = 1;
 }
 
 
 //BOTAO 4 PRESSIONADO - aumentar intensidade
  else if (valorAnteriorLeitura == 1023 &&
          valorLeitura >=valorBotao4 * 0.9 &&
          valorLeitura <=valorBotao4 * 1.1){
  if (posicao == 0 && estadoLedVerde)
   {
    if (intensidadeLedVerde <100)//limitou de 0 a 100
    intensidadeLedVerde +=10;
   }
   else if (posicao == 1 && estadoLedVermelho)
   {
    if (intensidadeLedVermelho <100)
    intensidadeLedVermelho += 10;
   }
  alteracao = 1;
}
 
 
  //BOTAO 5 PRESSIONADO
  else if (valorAnteriorLeitura == 1023 &&
       valorLeitura >=valorBotao5 * 0.9 &&
       valorLeitura <=valorBotao5 * 1.1){
    if (posicao == 0)
    {
      estadoLedVerde = !estadoLedVerde;
      if (estadoledVerde && intensidadeLedVerde){
       
      }
       
    }
    else estadoLedVermelho = !estadoLedVermelho;
    //se a posiçao da seta for 0
    alteracao = 1;
  }
 
  valorAnteriorLeitura = valorLeitura;
 
 
 //INICIO TRATAMENTO DISPLAY
 
  if (alteracao == 1){
 
  alteracao == 0;
   
  if (posicao == 0){
   
    lcd.setCursor (0,0);
    lcd.print (">");
    lcd.setCursor (0,1);
    lcd.print (" ");
  }                
  else {
   
    lcd.setCursor (0,1);
    lcd.print (">");
    lcd.setCursor (0,0);
    lcd.print (" ");
  }
 
  if (estadoLedVerde ==0){
  lcd.setCursor (7,0);
  lcd.print ("OFF  ");
  }
  else {
  lcd.setCursor (7,0);
  lcd.print (intensidadeLedVerde);
  lcd.print (" % ");
  }
 
  if (estadoLedVermelho ==0){
  lcd.setCursor (7,1);
  lcd.print ("OFF  ");
  }
  else {
  lcd.setCursor (7,1);
  lcd.print (intensidadeLedVermelho);
  lcd. print (" % ");
  }
 }
 
  //ACIONAMENTO LEDS
 
  if (posicao == 0) analogWrite (pinLedVerde, intensidadeLedVerde);
  else analogWrite (pinLedVermelho, intensidadeLedVermelho);
   
}
 
  //if (estadoLedVerde) analogWrite(pinLedVerde,18);
 
  //esse ultimo numero é o valor de intensidade
  //do led, pode variar de 0 a 255
  //else analogWrite (pinLedVerde, 0);

 