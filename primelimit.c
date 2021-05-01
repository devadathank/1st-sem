#include<stdio.h>
int main()
{
  int n,i,flag;
  printf("the prime numbers from 100 to 1000 are: \n");
  for(n=100;n<=1000;n++)
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
