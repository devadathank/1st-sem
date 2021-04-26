#include<stdio.h>
void main()
{
  int n,a[100],sum=0,i;
  printf("Enter the number (less than or equal to 100)");
  scanf("%d",&n);
    if(n<=100)
    {
      printf("Enter the %d numbers: ",n);
      for(i>0;i<n;i++)
      {
      scanf("%d",&a[i]);
      sum=sum+a[i];
      }
     for(i=n-1;i>=0;i--)
     {
       printf(" %d \t ",a[i]);
     }
    }

    else
    {
      printf("Please enter a number less than or equal to 100");
    }
}
