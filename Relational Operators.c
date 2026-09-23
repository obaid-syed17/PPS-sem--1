#include<stdio.h>
int main()
{
  int n1,n2;
  printf("Enter the values:");
  scanf("%d %d",&n1,&n2);
  printf("%d\n",n1==n2);
  printf("%d\n",n1<n2);
  printf("%d\n",n1>n2);
  printf("%d\n",n1<=n2);
  printf("%d\n",n1>=n2);
  printf("%d",n1!=n2);
  return 0;
}
