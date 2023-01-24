/********************************************************************************
Gere uma s�rie de N numeros aleat�rios, com valores entre 0 e 1000,
quantidade esta definida pelo usu�rio. Exiba  na tela a s�rie gerada e, ao final:
a) O maior valor da s�rie;
b) O menor valor da s�rie;
c) A m�dia aritm�tica da s�rie;
d) A quantidade de n�meros primos desta s�rie.
**********************************************************************************/

#include <stdio.h>
#include <stdlib.h> // inclui a SRAND;
#include <time.h>   // inclui o tempo do relogio;
#include <locale.h>

int primo (int);

int main ()
{
setlocale(LC_ALL, "Portuguese");
int n,i,x;
/**
n= quantos numeros o usuario quer gerar;
i= variavel do la�o;
x= n�meros aleat�rios;
*/
int soma=0;  //!soma= a soma dos n�meros aleat�rios.
int maior=0;
int menor=1000;
int media; //!media= media dos numeros aleatorios;
int primos=0; //! quantidade de numeros primos da s�rie;

printf("*****Este programa gera 'n' n�meros pseudoaleatorios em um intervalo de 0 a 1000*****\n\n");
printf ("Determine quantos n�meros aleat�rios voc� deseja gerar: ");
scanf("%d",&n);

/**Fun��o RAND:
Gera n�meros pseudo aleat�rios entre 0 e RAND_MAX, onde RAND_MAX � um valor que pode variar de acordo com a m�quina.
Por�m, essa fun��o gera sempre a mesma sequ�ncia de n�meros todas as vezes que o programa for rodado.

  Fun��o SRAND:
Alimenta a fun��o rand com uma semente. Neste programa foi usado o pr�prio tempo do pc como tal.
*/

srand((unsigned)time(NULL));

for (i=1;i<=n;i++)
    {
    x=rand()%1000;
    printf("N�mero %2d: %d\n",i, x);
    if (maior<x){maior=x;}  // descobrindo o maior da sequencia;
    if (menor>x){menor=x;}  // descobrindo o menro da sequencia;
    soma= soma+x;           // descobrindo a soma dos num. aleatorios;
    primos=primo(x)+primos; // descobrindo a quantidade de n�meros primos.
    }
//! rand()%1000 -> limita o RAND_MAX a 1000.

media=soma/n;

printf("\nO maior n�mero da sequ�ncia �: %d\n",maior);
printf("O menor n�mero da sequ�ncia �: %d\n",menor);
printf("A m�dia aritm�tica (arredondada) da sequ�ncia �: %d\n",media);
printf("A quantidade de n�meros primos presentes na sequ�ncia �: %d\n",primos);

}

int primo (int num)
{
 int divisor;

 if (num<2) // se o num for <2, consequentemente ele n�o � primo.
 return 0;

 divisor=2;

 while (divisor<num)
    {
    if(num%divisor==0)
    {return 0;}

    divisor ++;
    }
 return 1; // n�mero � primo.
}
