/********************************************************************************
Gere uma série de N numeros aleatórios, com valores entre 0 e 1000,
quantidade esta definida pelo usuário. Exiba  na tela a série gerada e, ao final:
a) O maior valor da série;
b) O menor valor da série;
c) A média aritmética da série;
d) A quantidade de números primos desta série.
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
i= variavel do laço;
x= números aleatórios;
*/
int soma=0;  //!soma= a soma dos números aleatórios.
int maior=0;
int menor=1000;
int media; //!media= media dos numeros aleatorios;
int primos=0; //! quantidade de numeros primos da série;

printf("*****Este programa gera 'n' números pseudoaleatorios em um intervalo de 0 a 1000*****\n\n");
printf ("Determine quantos números aleatórios você deseja gerar: ");
scanf("%d",&n);

/**Função RAND:
Gera números pseudo aleatórios entre 0 e RAND_MAX, onde RAND_MAX é um valor que pode variar de acordo com a máquina.
Porém, essa função gera sempre a mesma sequência de números todas as vezes que o programa for rodado.

  Função SRAND:
Alimenta a função rand com uma semente. Neste programa foi usado o próprio tempo do pc como tal.
*/

srand((unsigned)time(NULL));

for (i=1;i<=n;i++)
    {
    x=rand()%1000;
    printf("Número %2d: %d\n",i, x);
    if (maior<x){maior=x;}  // descobrindo o maior da sequencia;
    if (menor>x){menor=x;}  // descobrindo o menro da sequencia;
    soma= soma+x;           // descobrindo a soma dos num. aleatorios;
    primos=primo(x)+primos; // descobrindo a quantidade de números primos.
    }
//! rand()%1000 -> limita o RAND_MAX a 1000.

media=soma/n;

printf("\nO maior número da sequência é: %d\n",maior);
printf("O menor número da sequência é: %d\n",menor);
printf("A média aritmética (arredondada) da sequência é: %d\n",media);
printf("A quantidade de números primos presentes na sequência é: %d\n",primos);

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
