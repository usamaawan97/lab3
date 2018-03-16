
#include<stdio.h>
#include"myStr.h"

int main()
{
  char arr[3]={'m','a','m'};
   int size=3;
  if(isPalindrome(&arr,size)==1)
  {
   printf("Yes its palindrome\n");
 }
 else
 {
    printf("No its not palindrome\n");
 }
 
return 0;
}



