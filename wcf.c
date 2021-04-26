#include<stdio.h>
void main()
{
  float v,t,wcf,s1,m,s2;
  printf("Enter the value of wind Velocity, V= ");
  scanf("%f",&v);
  printf("Enter the value of Temparature, T= ");
  scanf("%f",&t);
  s1=35.74 + 0.6215*t;
  s2=0.4275*t - 35.75;
  m=v*0.16;
  wcf=s1+s2*m;
  printf("Wind chill factor = %f \n ",wcf);
}
