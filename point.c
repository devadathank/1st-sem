/* Q. Given a point (x,y), write a program to find out if it lies on the X-axis, Y-axis or on the origin.
*/
  /* code */

#include<stdio.h>
int main()
{
  int p,x,y;
  printf("Enter the pont:   ");
  scanf("%d%d",&x,&y);
    if(x==0 && y>0)
    {
      printf("the point p(%d,%d) lies on y axis",x,y);
    }
    else if(x==0 && y==0)
    {
      printf("The point p(%d,%d) lies on orgin",x,y);
    }
    else if(y==0 && x>0)
    {
      printf("the point p(%d,%d) lies on x axis",x,y);
    }
    else if(x,y!=0)
    {
      printf("The point p(%d,%d) lies on x,y plane",x,y);
    }
}
