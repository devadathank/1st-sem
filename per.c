#include<stdio.h>
void main()
{
  int n=1,i,s;
  while(n<=10000)
  { i=1;
    s=0;
    while(i<n)
    {
      if(n%i==0)
      {
        s=s+i;
      }
      i++;
    }
    if(n==s)
    {
      printf("%d \n",n);
    }
    n++;
  }
}
