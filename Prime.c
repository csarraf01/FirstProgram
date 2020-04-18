#include<stdio.h>
int prime(int x)
{
    int i,c=0;
    for(i=1;i<=x;i++)
    {
      if(x%i==0)
      c++;
    }
    if(c==2)
    return 1;
    else
    return 0;
}
void main()
{
  int n;
  printf("Enter the value to check if its prime or not\n");
  scanf("%d",&n);
  if(prime(n)==1)
  printf("\nThe number is prime");
  else
  printf("\nThe number is not pirme");
}
