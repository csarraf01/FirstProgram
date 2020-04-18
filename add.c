#include<stdio.h>
int add(int a,int b)
{
  int sum;
  sum=a+b;
  return sum;
}
void main()
{
  int x,y;
  printf("Enter the two numbers\n");
  scanf("%d%d",&x,&y);
  int s=add(x,y);
  printf("Sum of %d and %d is %d\n",x,y,s);
}
