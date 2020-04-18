#include<stdio.h>
 int temp=1;
int lcm(int a, int b)
{
   if(temp%a==0&&temp%b==0)
  return temp;
  else
  {
    temp++;
    lcm(a,b);
    return temp;
  }
}
void main()
{
  int x,y;
  printf("Enter the two numbers\n");
  scanf("%d%d",&x,&y);
  int l=lcm(x,y);
  printf("Lcm of the two numbers %d and /d is %d ",x,y,l);
}
