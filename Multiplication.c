#include<stdio.h>
int main()
{
    int n1,n2,Addition,Subtraction,Multiplication,Division,Modulus;
    printf("Enter the values:");
    scanf("%d %d",&n1,&n2);
    Addition=n1+n2;
    Subtraction=n1-n2;
    Multiplication=n1*n2;
    Division=n1/n2;
    Modulus=n1%n2;
    printf("N1=%d\n",n1);
    printf("N2=%d\n",n2);
    printf("Addition=%d\n",Addition);
    printf("Subtraction=%d\n",Subtraction);
    printf("Multiplication=%d\n",Multiplication);
    printf("Division=%d\n",Division);
    printf("Modulus=%d",Modulus);

    return 0;
}
