#include<stdio.h>
int main()
{
  int z=0;
    int n,a,b,c,d,e;
    printf("Enter the amount: ");
    scanf("%d",&n);
    printf("%d=",n);
    if(n>0)
    {
      a=n/100;
      if(a>=1)
      {
        printf(" %d x 100",a);
        n=n-(a*100);
      }
      b=n/50;
      if(b>=1)
      {
        printf(" %d x 50",b);
        n=n-(b*50);
      }
      c=n/10;
      if(c>=1)
      {
        printf(" %d x 10",c);
        n=n-(c*10);
      }
      d=n/5;
      if(d>=1)
      {
        printf(" %d x 5",d);
        n=n-(d*5);
      }
      e=n/1;
      if(e>=1)
      {
        printf(" %d x 1",e);
      }
    }
    else
    {
      printf("invalid amount");
    }
}
