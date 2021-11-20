//program to print given pattern using loops
#include<stdio.h>
int main()
{
  int n,i,j;
  printf("Enter no of rows n=");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=i;j++)
    {
      printf("01");
    }
    printf("\n");
  }
  return 0;
}
