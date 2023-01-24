/************************************************************************************************
Exercício:
Solicite ao usuário dois valores numéricos de 1 a 6. Simule o lançamento de dois dados.
Informe ao usuário quantos lançamentos foram necessários para obter os valores escolhidos por ele.
***********************************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<time.h>

int main ()
{
 setlocale(LC_ALL,"portuguese");

 int v1,v2,i, al1, al2; // valor 1, valor 2, variavel do laço, aleatorio 1, aleatorio 2.

 srand((unsigned)time(NULL)); // gerando números aleatórios.

 do{
   printf("Digite um valor de 1 a 6: ");
   scanf("%d",&v1);
 }while(v1<1 || v1>6);

 do{
   printf("Digite outro valor de 1 a 6: ");
   scanf("%d",&v2);
 }while(v2<1 || v2>6);


 for (i=1;i<=1000;i++)
    {
     al1=rand()%7; //limitando os números aleatórios a 6.
     al2=rand()%7;
     printf ("\nJogando os dados... valores dos dados: %d e %d", al1,al2);

     if((al1==v1 && al2==v2) || (al2==v1 && al1==v2))
         {
         printf ("\n\nNúmero de vezes que os dados foram jogados para obter essa combinação: %d",i);
         break;
         }
     }
printf("\n\n");
}

