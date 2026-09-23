#include <stdio.h>
int main()
{
    float B,H,area;
    printf("Enter the values:");
    scanf("%f %f",&B,&H);
    area=B*H*0.5;
    printf("Base=%f\n",B);
    printf("Height=%f\n",H);
    printf("Area=%f",area);
    return 0;
}
