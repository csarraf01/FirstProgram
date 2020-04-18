#include<stdio.h>
int prime(int a,int i)
{
    if(i==1)
    return 1;
    else
    {
        if(a%i==0)
        return 0;
        else
        return (prime(a,i-1));
        
    }
}
}
void main()
{
  int n,i;;
  printf("Enter the value to check if its prime or not\n");
  scanf("%d",&n);
  if(prime(n,(n-1)==1)
  printf("\nThe number is prime");
  else
  printf("\nThe number is not pirme");
}
