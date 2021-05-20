#include<stdio.h>
void main()
{
  int a,b,c,s;
  printf("Enter the angles in degree a,b,c:  ");
  scanf("%d%d%d",&a,&b,&c);
  s=a+b+c;
  if(s==180)
  {
    printf("The triangle is valid \n");
  }
  else
  {
    printf("The triangle is not valid \n");
  }
}
