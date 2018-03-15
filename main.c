#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice,score;
    int english();
    int maths();
    int history();
    printf("Enter choice of subjects as follows: 1.English/n 2.History/n 3.Maths");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:score=english();
    break;
    case 2:score=history();
    break;
    case 3:score=maths();
    break;
    default: printf("invalid choice");
    }
return 0;
}
int english()
{
    char ans;
    int score=0,i;
    printf("Welcome to English quiz\n");
    for(i=1;i<=2;i++)
    {
      switch(i)
      {
          case 1:
    printf(" Q1: Who is the author of Pride and Prejudice?\n");
    printf("a.JK ROWLING b.Mark Twain c.Shakespeare d.Jane austen\n");
    scanf(" %c",&ans);
    if (ans=='d')
       {
        printf("the ans is correct\n");
        score=score+2;
        printf("the score is %d\n",score);
       }
    else
        {
            printf("the ans is incorrect\n");
            score=score-1;
            printf("the score is %d\n",score);
        }
        break;
    case 2:
        printf("Q2:Who wrote Kabuliwala?\n");
        printf("a.tagore b.satyajit ray c.nehru d.chetan bhagat\n");
        scanf(" %c",&ans);
        if (ans=='a')
        {
        printf("the ans is correct\n");
        score=score+2;
        printf("the score is %d\n",score);
       }
    else
        {
            printf("the ans is incorrect\n");
            score=score-1;
            printf("the score is %d\n",score);
        }
        break;
        }
}
return score;
}
int maths()
{
    char ans;
    int score=0;
    printf("welcome to math quiz\n");
    printf("Q1. What is the sum of 2 and 2\n");
    printf("a.4 b.6 c.8 d.9\n");
    scanf(" %c",&ans);
     if (ans=='a')
       {
        printf("the ans is correct\n");
        score=score+2;
        printf("the score is %d\n",score);
       }
    else
        {
            score=score-1;
            printf("the ans is incorrect\n");
            printf("the score is %d",score);
        }
        return score;
}
int history()
{
    char ans;
    int score=0;
    printf("welcome to history quiz\n");
    printf("Q1. When did india get independence\n");
    printf("a.1943 b.1947 c.1966 d.1965\n");
    scanf(" %c",&ans);
    if (ans=='b')
       {
        printf("the ans is correct\n");
        score=score+2;
        printf("the score is %d\n",score);
       }
    else
        {
            printf("the ans is incorrect\n");
            score=score-1;
            printf("the score is %d\n",score);
        }
        return score;
}
