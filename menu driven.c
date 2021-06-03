#include<stdio.h>
int main()
{
  do
  {
    int a,n,x;
    printf(" 1.Factorial of a number\n 2.Prime or Not\n 3.Odd or even\n 4.Exit\n\n");
    printf("Enter your Choise:  \n");
    scanf("%d",&n);
    printf("******** \n");
    if(n>0 && n<5)
    {
      printf("Enter the number: \n");
      scanf("%d",&a)
      switch(n)

      case 1:
      printf("Factorial of a number");
      printf("******** \n");
      while(a=0;a<=n;a++)
      {
        x=1;
        x=x*a;
      }
      printf("%d!=%d",a,x)

      case 2:
      printf("Factorial of a number");
      printf("******** \n");
      for(x=2;x<=a/2;x++)
      {
          if(a%x==0)
          {
            flag=1;
            break;
          }
      }
      if(flag==0 && a>2)
      {
        printf("prime \n");
      }
      else
      {
        printf("not prime \n");
      }


      case 3:
      printf("Odd or even");
      printf("******** \n");
      if(a>=0)
      {
        printf("%d is positive",a);
      }
      else
      {
        printf("%d is negative",a);
      }
      printf("%d!=%d",a,x)

      case 1:
      printf("Factorial of a number");
      printf("******** \n");
      while(a=0;a<=n;a++)
      {
        x=1;
        x=x*a;
      }
      printf("%d!=%d",a,x)
    }
  } while(n!=4);
}
