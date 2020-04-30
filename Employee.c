
#include <stdio.h>
struct employee{
    char empname[30];
    char deptname[30];
    float salary;
};
int main()
{
     struct employee emp[20];
     int i;
     for(i=1;i<=20;i++)
    {
        printf("\nEnter details of employee %d :\n",i);
        printf("Name ?:\n");     
        scanf("%s",&emp[i].empname);
        printf("Department ?:\n");        
        scanf("%s",&emp[i].deptname);
        printf("Salary ?:\n");        
        scanf("%f",&emp[i].salary);
    } 
    for(i=1;i<=20;i++)
    {
        printf("\nEntered detail is:\n");
        printf("Name: %s\n",emp[i].empname);
        printf("Department: %d\n",emp[i].deptname);
        printf("Salary: %f\n",emp[i].salary);
    }
    return 0;
}
