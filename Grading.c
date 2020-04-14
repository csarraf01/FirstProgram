#include<stdio.h>
void main()
{
    int marks;
    printf("Enter marks\n");
    scanf("%d",&marks);
    printf("The student's grade is : ");
    if(marks>=85&&marks<=100)
    printf("A");
    else if(marks>=70&&marks<=84)
    printf("B");
    else if(marks>=55&&marks<=69)
    printf("C");
    else if(marks>=40&&marks<=54)
    printf("D");
    else
    printf("F");
}
