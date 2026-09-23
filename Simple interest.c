#include <stdio.h>
int main()
{
    float P,R,T,Simple_interest;
    printf("Enter the Values");
    scanf("%f %f %f",&P,&R,&T);
    Simple_interest=P*R*T/100;
    printf("Principle=%f\n",P);
    printf("Rate of interest=%f\n",R);
    printf("Time period=%f\n",T);
    printf("Simple interest=%f",Simple_interest);
    return 0;
}
