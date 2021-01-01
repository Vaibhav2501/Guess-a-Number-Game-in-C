/* Coded by :- Vaibhav Sheth */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int gen();

int main()
{ 
    int num,comp,ply1=0,ply2=0,i,n;  // n for how many times player wants to play
    char name1[50], name2[50];
    
    printf(" How many times do you want to play? ");
    scanf("%d",&n);
    getchar();
    printf("Enter Your Name:- ");
    gets(name1);
    printf(" \n /******************************************/ \n ");
    printf("Player Name :- %s \n\n",name1);

    for(i=1;i<=n;i++)
    {
        printf(" Guess your number \n");
        scanf("%d",&num);
    
        comp=gen();
        if(comp==num)
        {
            printf(" Correct Guess \n");
            ply1++;
        }    
        else if(comp>num)
        {
            printf(" Too less Guess \n");
        }
        else
        {
            printf(" Too high Guess \n");
        }
    }
    
    getchar();
    printf("Enter Your Name:- ");
    gets(name2);
    printf(" \n /******************************************/ \n ");
    printf("Player Name :- %s \n",name2);
    
    for(i=1;i<=n;i++)
    {
        printf(" Guess your number \n");
        scanf(" %d",&num);
    
        comp=gen();
        if(comp==num)
        {
            printf(" Correct Guess \n");
            ply2++;     
        }
        else if(comp>num)
        {
            printf(" Too less Guess \n");
        }
        else
        {
            printf(" Too high Guess \n");
        }
    }
    
    printf(" Player 1 =%d \t\t Player 2 =%d \n ",ply1,ply2);
    if(ply1>ply2)
    {
        printf(" %s Player Win \n", name1);
    }
    else if(ply1<ply2)
    {
        printf(" %s Player Win \n", name2);
    }
    else
    {
        printf(" Game Tied \n");
    }
    return 0;
}

int gen()
{   
    int temp;
    srand(time(NULL));
    temp=rand()%10 +1;
    printf(" random =%d\n",temp);
    return temp;
    
}


