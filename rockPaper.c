#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int userInput()
{
    int a;
    printf("Enter 0-> Seassor\nEnter 1-> Rock\nEnter 2-> Papper\n: ");
    scanf("%d", &a);
    return a;
}
int randomNum()
{
    int comp_guess;
    srand(time(NULL));
    comp_guess = rand() % 2;
    if (comp_guess == 0)
    {
        printf("Computer Choose Seassor\n");
    }
    else if (comp_guess == 1)
    {
        printf("Computer Choose Rock\n");
    }
    else
        printf("Computer Choose Papper\n");

    return comp_guess;
}
void winnerCheck(int human, int comp, int *you, int *oppo)
{
    int yo=0,opp=0;
    if (human == 0 && comp == 1)
    {
        printf("Computer wins\n");
        opp++;
    }
    else if (human == 0 && comp == 2)
    {
        printf("You wins\n");
        yo;
    }
    else if (human == 1 && comp == 0)
    {
        printf("You wins\n");
        yo;
    }
    else if (human == 1 && comp == 2)
    {
        printf("Comuter wins\n");
        opp++;
    }
    else if (human == 2 && comp == 0)
    {
        printf("Computer wins\n");
        opp++;
    }
    else if (human == 2 && comp == 1)
    {
        printf("You wins\n");
        yo++;
    }
    else
        printf("Same Guess\n");
    *you=yo;
    *oppo=opp;
}
int main()
{
    int you, oppo;
    for (int i = 0; i <= 2; i++)
    {
        int b = userInput();
        int c = randomNum();
        winnerCheck(b, c, &you, &oppo);
    }
    printf("You\t");
    printf("Computer\n");
    printf("%d\t",you);
    printf("%d",oppo);

    return 0;
}
//maybe computer randomly generattes 0 so fully not correct