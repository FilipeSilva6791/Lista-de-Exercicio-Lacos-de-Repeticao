 /**********************************************************************************************
 Elabore um algoritmo que escreva os cinco primeiros números perfeitos. São números perfeitos,
 todos aqueles em que a soma dos seus divisores é igual ao número em questão. EX: 6 = 1 + 2 + 3.
 ***********************************************************************************************/

 #include <stdio.h>
 #include <math.h>

 int main ()
{
 float div; // variavel do laço dos divisores
 float x=0; //numero usado para identificar os perfeitos
 float num=5; //variavel do laço dos numeros
 float y=0; // variavel que determina quando o laco vai parar (quando achar os 5 primeiros perfeitos)

 printf ("Os 5 primeiros numeros perfeitos sao:\n\n");

do //gera uma sequencia de numeros ate y<=5
{
    for(div=1; div<num; div++) // gera uma sequencia de divisores para cada numero gerado no DO-WHILE
    {
     if (fmod(num,div)==0) //encontra os divisores e soma eles na variavel x
        {
         x=x+div;
        }
    }

     if (x==num) //testa se x é igual ao numero que esta sendo gerado no momento --> numero é perfeito
        {
         printf("%.0f ",x);
         x=0; //zera novamente a variavel x para achar o proximo valor
         y++; // soma 1 a y
        }
 x=0; //zera x se o if não for verdadeiro
 num++;
}while (y<=4);

printf("\n\n");

 }

