/*
Autor:Maria Clara de Assis Ramos 
Data: 24/02/2025
Descrição: Este codigo...
/*

//****DECLARAÇÃO DE VARIAVEIS GLOBAIS*******/

int numeroA = 14;
int numeroB = 5;
int resultado = 0;
float resultadoReal = 0;
  
  
void setup()
{
  Serial.begin(9600);
  
  //*****SOMA******
  resultado = numeroA + numeroB;
  Serial. print("A soma do numero A com o numero B eh: ");
  Serial.println(resultado);
  
  //****SUBTRAÇÃO*****
  resultado = numeroB - numeroA;
  Serial.print("A subtracao de numero B pela A: ");
  Serial.println (resultado);
  
  //****MULTIPLICAÇÃO*****
  resultado = numeroA * numeroB;
  Serial.print("A multiplicacao de A e B eh': ");
  Serial.println(resultado);
  
  //****DIVISAO****
  resultado = numeroA/numeroB;
  Serial.print("A divisao de A por B eh: ");
  Serial.println(resultado);
  resultado = numeroA % numeroB;
  Serial.print("e sobra: ");
  Serial.println(resultado);
  resultadoReal = (float)numeroA / (float)numeroB;
  Serial.print("ou");
  Serial.println(resultadoReal, 1); //limita a impressão do resultado
                                    //em uma casa decimal
  //****POTENCIA****
  resultado = pow(numeroA,numeroB); //'numeroA' elevado a 'numeroB
  Serial.print("numero A elevado a numero B eh: ");
  Serial.println(resultado);
  
  //****QUADRADO****
  resultado = sq(numeroA); //numeroA elevado ao quadrado
  Serial.print("numero A elevado ao quadrado eh: ");
  Serial.println(resultado);
  
  //****RAIZ QUADRADA****
  resultadoReal = sqrt(numeroA);
  Serial.print("A raiz quadrada de numero A eh: ");
  Serial.println(resultadoReal);
  
  //****MODULO****
  resultado = abs(numeroA * -1);
  Serial.println(resultado);
               
  //****RESTRICAO****
  resultado = constrain(numeroA, -3, 5);//restringe a variavel numero A aos
                                        //limites -3 e 5 
  Serial.println(resultado);               
        
  //****REMAPEAMENTO***
  resultado = map(7, 0, 10, 0, 1000);
  //map(valor, deMenor, deMaior, paraMenor, paraMaior)
  Serial.println(resultadoReal);
               
  //OPERADORES DE ATRIBUICAO
  
  //numeroA = numeroA + 5;
  Serial.println(numeroA += 5);
               
  //numeroA = numeroA - 5;
  Serial.println(numeroA -=5);
  
  //numeroA * 2;
  Serial.println (numeroA *=2);
  
  //numeroA = numeroA / 2;
  Serial.println (numeroA /=2);
  
  
  //INCREMENTAR VARIAVEL
  //numeroA = numeroA + 1;
  Serial.println(numeroA++); //pos incremento
  Serial.println(++numeroA); //pre inrcremento
  
  //DECREMENTAR A VARIAVEL
  //numero = numeroA - 1;
  Serial.println(numeroA--); //pos incremento
  Serial.println(--numeroA); //pre incremento
  
  resultadoReal = 3 * ((2.0 / 5.0)  + (2 * 3)) ;
  Serial.println(resultadoReal);
  //RESPOSTA A EXERCICIO MAP
  //Resultado= (valor-deMenor) * (paraMaior-paraMenor) / (deMaior-deMenor) + paraMenor;
  
}

void loop()
{
}