#include <Arduino.h>
#define pinLed 19

//*PROTOTIPO DA FUNCAO
int calculoSegundoGrau(int, int, int);

void setup()
{
  Serial.begin(9600);

int raizDaFuncao = calculoSegundoGrau(1, 5, 6);
Serial.println(raizDaFuncao);
}
void loop()
{
 
}

int calculoSegundoGrau( int a, int b, int c)
{
int resultado;
resultado =  (-b + sqrt((b * b)- (4 * a * c))) / (2 * a);
return resultado ; 
}

