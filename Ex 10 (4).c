 /**********************************************************************************************
 Elabore um algoritmo que escreva os cinco primeiros n�meros perfeitos. S�o n�meros perfeitos,
 todos aqueles em que a soma dos seus divisores � igual ao n�mero em quest�o. EX: 6 = 1 + 2 + 3.
 ***********************************************************************************************/

 #include <stdio.h>
 #include <math.h>

 int main ()
{
 float div; // variavel do la�o dos divisores
 float x=0; //numero usado para identificar os perfeitos
 float num=5; //variavel do la�o dos numeros
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

     if (x==num) //testa se x � igual ao numero que esta sendo gerado no momento --> numero � perfeito
        {
         printf("%.0f ",x);
         x=0; //zera novamente a variavel x para achar o proximo valor
         y++; // soma 1 a y
        }
 x=0; //zera x se o if n�o for verdadeiro
 num++;
}while (y<=4);

printf("\n\n");

 }

