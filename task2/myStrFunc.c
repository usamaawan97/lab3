#include<stdio.h>


int isPalindrome(char *arr, int size)
{
int j=0;
int max=size-1;
for (int i=0;i<size/2;i++)
{
 if (arr[i]==arr[max])
 {
  j=1;
  max--;
 }
 else
  {
    j=0;
  }

}
if(j==1)
{
 return 1;
}
else
{
 return -1;
}

}


