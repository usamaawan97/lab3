
#include<stdio.h>
#include"myMath.h"

int main()
{
  int a=0;
   int b=0;

 printf("Enter First Number:");
 scanf("%d",&a);
 printf("Enter Second Number:");
 scanf ("%d",&b);

 if(isEqual(a,b)==1)
 {
   printf("Numbers are equal\n");
 }
 else 
 {
  printf("Numbers are not equal\n");
 }

  printf("Values after swapping:\n");
  swap(&a,&b);
  


return 0;
}



