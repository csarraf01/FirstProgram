#include<stdio.h>
int add(int a,int b)
{
  if(b==0)
  return a;
  else
  return (1+add(a,b-1));
}
void main()
{
  int x,y;
  printf("Enter the two numbers\n");
  scanf("%d%d",&x,&y);
  int s=add(x,y);
  printf("Sum of %d and %d is %d\n",x,y,s);
}
