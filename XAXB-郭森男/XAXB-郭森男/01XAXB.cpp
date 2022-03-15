#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int num[4], guess[4];
    int go = 1, a = 0, b = 0;
    int i, j;

    while (go == 1)
    {
        num[0] = rand() % 10;
        while (1)
        {
            num[1] = rand() % 10;
            if (num[1] != num[0]) break;
        }
        while (1)
        {
            num[2] = rand() % 10;
            if (num[2] != num[1] && num[2] != num[0]) break;
        }
        while (1)
        {
            num[3] = rand() % 10;
            if (num[3] != num[2] && num[3] != num[1] && num[3] != num[0]) break;
        }

        while (1)
        {
            a = 0, b = 0;
            printf("please input your guess number\n");
            scanf("%d%d%d%d", &guess[0], &guess[1], &guess[2], &guess[3]);
            for (i = 0; i < 4; i++)
                for (j = 0; j < 4; j++)
                {
                    if (guess[j] == num[i])
                    {
                        if (j == i)
                            a++;
                        else
                            b++;
                        break;
                    }
                }
            if (a == 4)
            {
                printf("good! you all guess right!\n");
                break;
            }
            else
                printf("your answer is %dA%dB\n", a, b);
        }
        printf("do you want a game? 1->Yes 0->No\n");
        scanf("%d", &go);
    }

    system("PAUSE");
    return 0;
}