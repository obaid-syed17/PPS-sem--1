#include <stdio.h>

int main()
 {
    int n, sum = 0;


    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
        {
        sum += i;
    }


    printf("The sum of the first n natural numbers is=%d", sum);

    return 0;
}
