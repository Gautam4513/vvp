/*Write a c program to get record
(Player name, team name & runs of innings) of any three players
 from Indian cricket team.
 Print the record according to name of players
 in ascending order.*/
#include<stdio.h>
#include<string.h>
struct players
{
    char players_name[20];
    char team_name[20];
    int runs;
    int innings;
};
int main()
{
    int n,i,b,j;
    struct players p[10];
    struct players m2;
    printf("enter a number which you want to enter a data : ");
    number:
    scanf("%d",&n);
    if(n>10)
    {
        printf("maximum limit is 10 \nso re enter the number\nenter a number : ");
        goto number;
    }
    for(i=0;i<n;i++)
        {

            printf("\nenter a data of [%d] player : ",i+1);
            printf("\nenter a player name : ");
            scanf("%s",&p[i].players_name);
            printf("enter a team name : ");
            scanf("%s",&p[i].team_name);
            printf("enter a runs : ");
            scanf("%d",&p[i].runs);
            printf("enter a innings : ");
            scanf("%d",&p[i].innings);
        }
    for(i=0;i<n-1;i++)
    {
        strupr(p[i].players_name);
        strupr(p[i+1].players_name);
        b=strcmp(p[i].players_name,p[i+1].players_name);
        if(b>0)
        {
            m2=p[i+1];
            p[i+1]=p[i];
            p[i]=m2;
        }
        strlwr(p[i].players_name);
        strlwr(p[i+1].players_name);
    }
    printf("\nplayer  record in ascending order : \n");
    for(i=0;i<n;i++)
    {
        printf("\nname of p[%d] : ",i+1);
        puts(p[i].players_name);
        printf("tema of p[%d] : ",i+1);
        puts(p[i].team_name);
        printf("nuns = %d",p[i].runs);
        printf("\ninnings = %d\n",p[i].innings);

    }

    return 0;
}
