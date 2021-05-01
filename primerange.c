#include<stdio.h>
int main()
{
  int n,i,flag,n1,n2;
  printf("Enter the ranges n1 & n2");
  scanf("%d%d",&n1,&n2);
  printf("the prime numbers from 100 to 1000 are: \n");
  for(n=n1;n<=n2;n++)
  {
    flag=0;
      for(i=2;i<=n/2;i++)
      {
          if(n%i==0)
          {
            flag=1;
            break;
          }
      }
      if(flag==0)
      {
        printf("%d \t",n);
      }
  }
}
