#include<stdio.h>
void main()
{
  float n,a,b,r;
  do
  {
      printf("\n CALCULATOR \n");
      printf("******** \n");
      printf("1.ADDITION\n 2.SUBTRACTION \n 3.MULTIPLICATION \n 4.DIVISION 5.EXIT \n\n");
      printf("Enter Your Choise: \n ");
      scanf("%d",&n);
      if(n>0 && 6>n)
      {
        printf("Enter the two numbers: ");
        scanf("%d%d",&a,&b);
      }
      switch(n)
      {
        case 1:
          printf("ADDITION \n");
          printf("******** \n");
          r=a+b;
          printf("%d+%d=%d \n\n",a,b,r);
          break;
        case 2:
          printf("SUBTRACTION \n");
          printf("*********** \n");
          r=a-b;
          printf("%d-%d=%d \n\n",a,b,r);
          break;
        case 3:
          printf("MULTIPLICATION \n");
          printf("************** \n");
          r=a*b;
          printf("%dX%d=%d \n\n",a,b,r);
          break;
        case 4:
          printf("DIVISION \n");
          printf("******** \n");
          r=a/b;
          printf("%d/%d=%d \n\n",a,b,r);
          break;
        case 5:
          printf("GOOD BYE!! \n\n");
          break;
        default:
          printf("In Valid Number \n\n");
      }
      printf("--------------------------- \n");
  }while(n!=5);
  printf("\n\n");
}
