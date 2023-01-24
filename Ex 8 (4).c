/****************************************************************************
Solicite ao usuário um intervalo numérico e  um fator de divisão entre 2 e 15.
Garanta que o fator de divisão está na faixa solicitada. Exiba os valores do
intervalo até o primeiro valor divisível pelo fator informado.
***************************************************************************/

#include<stdio.h>
#include<locale.h>

int main ()
{
 setlocale(LC_ALL,"portuguese");

 int inicio, fim, i, fator; //!inicio do intervalo, fim do intervalo, variavel do laço e fator da divisao;

 printf("Digite o ínicio do intervalo: ");
 scanf("%d",&inicio);

 printf("\nDigite o fim do intervalo: ");
 scanf("%d",&fim);

 do {
        printf("\nEscolha um fator de divisão entre 2 e 15: ");
        scanf("%d",&fator);
 }while (fator<=2||fator>=15);

 printf ("\nValores do intervalo até o primeiro valor divisível pelo fator informado:\n\n ");

 for (i=inicio; i<=fim; i++)
 {
     if(i%fator!=0)
     {
         printf("%d ",i);
     } else {break;}
 }
 printf("\n\n");
}
