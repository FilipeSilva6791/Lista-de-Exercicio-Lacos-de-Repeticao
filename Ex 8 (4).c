/****************************************************************************
Solicite ao usu�rio um intervalo num�rico e  um fator de divis�o entre 2 e 15.
Garanta que o fator de divis�o est� na faixa solicitada. Exiba os valores do
intervalo at� o primeiro valor divis�vel pelo fator informado.
***************************************************************************/

#include<stdio.h>
#include<locale.h>

int main ()
{
 setlocale(LC_ALL,"portuguese");

 int inicio, fim, i, fator; //!inicio do intervalo, fim do intervalo, variavel do la�o e fator da divisao;

 printf("Digite o �nicio do intervalo: ");
 scanf("%d",&inicio);

 printf("\nDigite o fim do intervalo: ");
 scanf("%d",&fim);

 do {
        printf("\nEscolha um fator de divis�o entre 2 e 15: ");
        scanf("%d",&fator);
 }while (fator<=2||fator>=15);

 printf ("\nValores do intervalo at� o primeiro valor divis�vel pelo fator informado:\n\n ");

 for (i=inicio; i<=fim; i++)
 {
     if(i%fator!=0)
     {
         printf("%d ",i);
     } else {break;}
 }
 printf("\n\n");
}
