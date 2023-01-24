#include <stdio.h>

int main ()
{
 int num;

 for (num=1; num<=60; num++)
 {
  if (num%6==0) {printf("XX ");}
  else {printf ("%2d ",num);}

  if(num%10==0) {printf("\n");}
 }
}


