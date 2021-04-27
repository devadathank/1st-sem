#include<stdio.h>
#include<math.h>
void main()
{
  int a,cube,i;
  printf("Enter the number: ");
  scanf("%d",&a);
  for(i=0;i<a;i++)
  {
      cube=i*i*i;
      if(cube==a)
      {
        printf("cube root of %d = %d",a,i);
        break;
      }
      else if(cube>a)
      {
        printf("%d is not a perfect cube",a);
        break;
      }
  }
}
