/* The body mass index (BMI) is defined as the ratio of the weight of a person in kilograms to the square of the height in meters.
 Write a program that receives weight and height, calculates  the BMI and reports the BMI category as per the following table.  */


#include<stdio.h>
int main()
{
  float h,w,b;
  printf("Enter the height and weight:  ");
  scanf("%f%f",&h,&w);
  b=(w/h*h)*10000;
     if(b<=15)
    {
      printf("BMI = %f \n BMI category is Starvation",b);
    }
    else if(b>=15.1 && b<=17.5)
    {
      printf("BMI = %f \n BMI category is Anorexic",b);
    }
    else if(b>=17.6 && b<=18.5)
    {
      printf("BMI = %f \n BMI category is Underweight",b);
    }
    else if(b>=18.6 && b<=24.9)
    {
      printf("BMI = %f \n BMI category is Ideal",b);
    }
    else if(b>=25 && b<=25.9)
    {
      printf("BMI = %f \n BMI category is Overweight",b);
    }
    else if(b>=30 && b<=30.9)
    {
      printf("BMI = %f \n BMI category is Obese",b);
    }
    else if(b>=40)
    {
      printf("BMI = %f \n BMI category is Morbidly Obese",b);
    }
  printf("\n");
}
