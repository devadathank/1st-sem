#include<stdio.h>
int main()
{
  int n,i,flag,n1,n2;
  printf("Enter the ranges n1 & n2:  ");
  scanf("%d%d",&n1,&n2);
  if(n2>2)
  {
    printf("the prime numbers from %d to %d are: \n",n1,n2);
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
        if(flag==0 && n>2)
        {
          printf("%d \t",n);
        }
    }
        printf("\n");
  }
  else
  {
    printf("the second limit must be grater than 2 \n");
  }
}
