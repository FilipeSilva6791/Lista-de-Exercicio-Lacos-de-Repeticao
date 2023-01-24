#include<stdio.h>

int primos (int num,int div, int x);

int main ()
{
 int num, div, x;

 printf("Digite um numero para ser testado: ");
 scanf("%d",&num);

 x=primos(num,div,x);

 if(x==2)
 {
     printf("\n\nEste numero eh primo!\n\n ");
 } else { printf("\nEste numero nao eh primo!\n\n ");}

}


int primos (int num,int div, int x)
{
    x=0;
    div=1;

    do{
        if (num%div==0) {x++;}
        div++;
    } while (div<=num);

    return (x);
}

/**

 Explicando a função:

Primeiramente foram inicializadas as variáveis x e div (divisor);
logo em baixo o 'DO' executa aquele if com os valores inicializados para x e div
e com o valor do numero informado na main pelo usuario. cada vez que o if encontrar
um divisor para num que resulte em um resto nulo ele acrescenta 1 a variavel x. Logo após
o while determina que aquela ação só será feita em quanto div for menor ou igual o numero digitado,
evitando repetições desnecessárias. A função então retorna o valor de x, que será testado na main.

considerando que um número primo só é divisivel por ele mesmo e por um, o valor de x precisa ser 2
para que haja a confirmação de que aquele número é primo.

*/
