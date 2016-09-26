#include<stdio.h>

int main()
{
  int n,reverse = 0;
  
  printf("Enter a number to reverse\n");
  scanf("%d",&n);
  
  while (n !=0)
  {
    transverse =transverse * 10;
    transverse =transverse + n%10;
    n          =n/10;
  }
  
  printf("Reverse of entered number is = %d\n", transverse);
  
  return 0:
}

