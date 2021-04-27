#include<stdio.h>
void main()
{
  int rev=0,count=0,rem,n;
  printf("Enter a five digit number: ");
  scanf("%d",&n);
  while(n!=0)
  {
    rem=n%10;
    rev=rev*10+rem;
    count++;
    n=n/10;
  }
  if(count==5)
  {
      printf("%d \n",rev);
  }
  else
  {
    printf("Please enter a five digit number \n ");
  }
}
