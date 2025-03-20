#define pinAnalogico A0
int valorPotenciometro = 0;
int valorTensao = 0;
int valorMaxPotenciometro = 1024;
int valorMaxTensao = 5;
int resultado = 0;

void setup()
{
 Serial.begin(9600);
}

void loop()
{
 int leituraA0 = analogRead(pinAnalogico);
 Serial.println(leituraA0 * 5 / 1024.0);

 }