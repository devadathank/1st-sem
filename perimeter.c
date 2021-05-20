/*program to find whether the area of the rectangle is greater than its perimeter*/
#include<stdio.h>

int main()
{
  float length,breadth,perimeter,area;
  printf("Enter the Lenghth of the rectangle:  \n");
  scanf("%f",&length);
  printf("Enter the Breadth of the rectangle:  \n");
  scanf("%f",&breadth);
  area=length*breadth;
  perimeter=(length+breadth)*2;
  printf("area of the rectangle=%f \n",area);
  printf("perimeter of the rectangle=%f \n",perimeter);
  printf("\n\n");
  if(area>perimeter)
  {
    printf("area of the rectangle is greater than its perimeter\n");
  }
  else if(area==perimeter)
  {
      printf("area of the rectangle is equal to its perimeter\n");
  }
  else
  {
    printf("area of the rectangle is less than its perimeter\n");
  }
}
