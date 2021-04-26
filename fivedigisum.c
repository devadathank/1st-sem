#include<stdio.h>
void main()
{
  int sum=0,count=0,rem,n,nc;
  printf("Enter a five digit number: ");
  scanf("%d",&n);
  nc=n;
  while(n!=0)
  {
    rem=n%10;
    sum=sum+rem;
    count++;
    n=n/10;
  }
  if(count==5)
  {
      printf("sum=%d \n",sum);
  }
  else
  {
    printf("Please enter a five digit number \n ");
  }
}
