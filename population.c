#include<stdio.h>
int main()
{
  int population=100000,year;
  for(year=2020;year>=2011;year--)
  {
    population=(population*100)/110;
    printf("year %d \n",year);
    printf("current population=%d \n",population);
    printf("\n\n");

  }
}
