#define pinVermelho 2
#define pinVerde 3
#define pinLaranja 4
#define pinAzul 8
#define pinBranco 9
#define pinAmarelo 10
#define tempopinVermelho 3000
#define tempopinVerde 3000
#define tempopinLaranja 3000
#define pinBotao 5

// pinMode(10, INPUT_PULLUP) RESISTOR INTERNO

int numeroA = 1;
int numeroB = 5;
int resultado = 0;
int numeros[10] = {1, 4, 6, 8, 10, 14, 34, 12, 42};

void setup()
{
 Serial.begin(9600);
/*Exercicio 1- Tabuada
  for(int a = 0; a < 10; a++){  
resultado = (numeroA * numeroB);
Serial.print(numeroA);
Serial.print("x");
Serial.print(numeroB);
Serial.print("=");
Serial.println(resultado);
numeroA = ++numeroA;
}*/
 
/*Exercicio 2- Array 
int numero = 14;
bool encontrado = false;

for(int g = 0; g < 10; g++)
{
if(numero[g] == numero)
 {
encontrado = true;
 }
},
switch(encontrado)
{
case true:
Serial.println("numero encontrado");
break;

case false:
Serial.println("numero nao encontrado");
break;
}
}
}
*/

/*Exercico 3-LED  
int meusPinos[3] = {2, 3, 4};
  for(int L = 0; L < 3; L++)
  {
    pinMode(meusPinos[L], OUTPUT);
  }
for(int L = 0; L < 3; L++)
  {
   digitalWrite(meusPinos[L], HIGH);
delay(500);
  }
for(int L = 0; L < 3; L++)
  {
  digitalWrite(meusPinos[L], LOW);
delay(500);
 }*/
  
//Exercicios 4
 // ACENDER E APAGAR 3 LEDS, PROGRESSIVAMENTE APENAS C/ BOTAO ON

int pinLedsB[3] = {4,3,2};


// ACENDER E APAGAR 3 LEDS PROGRESSIVAMENTE APENAS C/ BOTAO ON
 
  bool estadoBotao = digitalRead(5);
 
  while (estadoBotao == 0){
     for(int j=0 ; j<=2 ; j++){
     pinMode(pinLedsB[j], OUTPUT);
     delay(500);
     }  

     for(int j=0 ; j<=2 ; j++){
     digitalWrite(pinLedsB[j], HIGH);
     delay(500);
     }

     for(int j=0 ; j<=2 ; j++){
     digitalWrite(pinLedsB[j], LOW);
     delay(500);
     estadoBotao = digitalRead(5);
     }
  }
 
     for(int j=0 ; j<=2 ; j++)
     digitalWrite(pinLedsB[j], LOW);
   
    
    
 void loop()
{
 
}