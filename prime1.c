#include<stdio.h>
#include<math.h>
int main()
{
  int n,i,flag=0;
  printf("enter the number:  ");
  scanf("%d",&n);
  for(i=2;i<=n/2;i++)
  {
      if(n%i==0)
      {
        flag=1;
        break;
      }
  }
  if(flag==0 && n>2)
  {
    printf("prime \n");
  }
  else
  {
    printf("not prime \n");
  }
}
