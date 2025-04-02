const int pinLeds[5] = {13,12,11,10,9};

void setup()
{
  for(int k = 0; k < 5; k++);
  pinMode(pinLeds[k], OUTPUT);
}

void loop()
{
  for(int i = 0; i < 5; i++)
   {
  digitalWrite(pinLeds[i], HIGH);
  delay(300);
   }
}