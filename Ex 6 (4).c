#include <stdio.h>

int primo (int num);

int main ()
{
int inicio, fim, troca, i;

printf("~~Programa que encontra números primos dentro de um determinado intervalo~~~\n\n");
printf("Digite o inicio do intervalo: ");
scanf("%d",&inicio);
printf("Digite o fim do intervalo: ");
scanf("%d",&fim);

if (fim<inicio) // reorganizando os valores caso o usuario digite errado
{
 troca=inicio;
 inicio=fim;
 fim=troca;
}

printf ("\nOs numeros primos presentes neste intervalo sao: \n");

for(i=inicio;i<=fim;i++)
{
if (primo(i)==1)
{
    printf(" %d ",i);
}
}
printf("\n\n");

system ("pause");
}

int primo (int num)
{
 int divisor;

 if (num<2) // se o num for <2, consequentemente ele não é primo.
 return 0;

 divisor=2;

 while (divisor<num)
    {
    if(num%divisor==0)
    {return 0;}

    divisor ++;
    }
 return 1; // número é primo.
}
