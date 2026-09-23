#include <stdio.h>

int main()
 {
    int m, n, i;

    printf("Enter the m value: ");
    scanf("%d", &m);
    printf("Enter the n value: ");
    scanf("%d", &n);

    printf("Odd numbers from m to n are:\n", m, n);

    i = m;

    if (i <= n) {
        do {

            if (i % 2 != 0)
                {
                printf("%d ", i);
            }
            i++;
        }
         while (i <= n);
    }
     else {
        printf("ERROR!!");
    }

    printf("\n");
    return 0;
}
