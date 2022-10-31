#include <stdio.h>
#include <time.h>

int game(char computer, char player)
{
    if (player == computer)
    {
        return -1;
    }
    if (computer == 's' && player == 'p')
    {
        return 0;
    }
    else if (computer == 'p' && player == 's')
    {
        return 1;
    }

    if (computer == 'r' && player == 's')
    {
        return 0;
    }
    else if (computer == 's' && player == 'r')
    {
        return 1;
    }
    if (computer == 'p' && player == 'r')
    {
        return 0;
    }
    else if (computer == 'r' && player == 'p')
    {
        return 1;
    }
}

int main()
{
    int n, result;
    char player, computer;

    srand(time(NULL));
    n = rand() % 100;

    if (n < 33)
    {
        computer = 's';
    }
    else if (n > 33 && n < 66)
    {
        computer = 'p';
    }
    else
    {
        computer = 'r';
    }

    printf("Enter s for Scissor, p for Paper and r for Rock\n");
    scanf("%c", &player);

    result = game(computer, player);

    if (result == 1)
    {
        printf("Player win\n");
    }
    else if (result == 0)
    {
        printf("Computer win\n");
    }
    else if (result == -1)
    {
        printf("Draw\n");
    }
    printf("Player choose %c and computer choose %c", player, computer);

    return 0;
}