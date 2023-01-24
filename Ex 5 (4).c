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

 Explicando a fun��o:

Primeiramente foram inicializadas as vari�veis x e div (divisor);
logo em baixo o 'DO' executa aquele if com os valores inicializados para x e div
e com o valor do numero informado na main pelo usuario. cada vez que o if encontrar
um divisor para num que resulte em um resto nulo ele acrescenta 1 a variavel x. Logo ap�s
o while determina que aquela a��o s� ser� feita em quanto div for menor ou igual o numero digitado,
evitando repeti��es desnecess�rias. A fun��o ent�o retorna o valor de x, que ser� testado na main.

considerando que um n�mero primo s� � divisivel por ele mesmo e por um, o valor de x precisa ser 2
para que haja a confirma��o de que aquele n�mero � primo.

*/
