#include <stdio.h>

int main()
{
    int n, i, j, space, rep = 1;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i =1; i <n; i++)
        {

        for (space = 1; space <=n - i; space++)
            {
            printf("  ");
        }

        for (j = 0; j <= i; j++)
            {
            if (j == 0 || i == 0)
            {
                rep= 1;
            }
            else
                {
                rep = rep * (i - j + 1) / j;
            }
            printf("%4d", rep);
        }

        printf("\n");
    }

    return 0;
}
