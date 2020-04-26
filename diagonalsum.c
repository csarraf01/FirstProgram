#include <stdio.h>

void main()
{

    int num[3][3],i,j;
    printf("Enter the numbers\n");
    for(i=0;i<3;i++)
    {       
        for(j=0;j<3;j++)
        {    
            scanf("%d",(*(num+i)+j));
        }
    }
    printf("Display the numbers in a matrix form");
    for(i=0;i<3;i++)
    {    
        printf("\n");
        for(j=0;j<3;j++)
        {
            printf("%d ",*(*(num+i)+j));
        }
    }
    printf("Display the sum of diagonal numbers");
    int sum=0;
    for(i=0;i<3;i++)
    {       
        for(j=0;j<3;j++)
        {    
            if(i==j)
            sum=sum+num[i][j];
        }
    }
    printf("%d",sum);
}
