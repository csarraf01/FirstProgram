#include <stdio.h>
#include<conio.h>
#include <string.h>
struct cricket
{

    char name[15];
    char team_name[15];
    float bat_avg;
};
void main()
{

    struct cricket player[100];
    int i,n;
    char ch,team[10];

    printf("Number of players: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\n NAME OF THE PLAYER %d: ",i+1);
        scanf("%s",player[i].name);
        printf("\n NAME OF THE TEAM %d:",i+1);
        scanf("%s",player[i].team_name);
        printf("\n BATTING AVERAGE OF THE PLAYER %d : ",i+1);
        scanf("%f",player[i].bat_avg);
    }
    printf("----------------------------------------------------\n");
    printf("    PLAYER          TEAM        BATTING AVERAGE\n");
    printf("----------------------------------------------------\n");
    for(i=0;i<=n;i++)
    {

    printf("\t%s \t\t %s \t\t %f\n",player[i].name,player[i].team_name,player[i].bat_avg);
    }
    read:
        printf("\nENTER THE TEAM YOU WANT TO LIST  : ");
        scanf("%s",team);


    printf("\n\t\t\t%s\t\t\t\n",team);
    printf("----------------------------------------------------\n");
    printf("     PLAYER         TEAM        BATTING AVERAGE\n");
    printf("----------------------------------------------------\n");
    for(i=0;i<=n;i++)
    {
        if(strcmp(team,player[i].team_name==0))
        {
            printf("\t %s \t\t %s \t\t %f\n",player[i].name,player[i].team_name,player[i].bat_avg);
        }
    }
    printf("\n\nDO YOU WANT TO LSIT IN ANY OTHER TEAM? (Y/N)");
    ch=getche();
    if(ch=='Y'||ch=='y')
        goto read;

    getch();

}
