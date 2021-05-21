#include<stdio.h>
int main()
{
  int h;
for(h=0;h<24;h++)
  {
    if(h==0)
    {
      printf("MID NIGHT 12 \n");
    }
    else if(h<12)
    {
      printf("%d AM \n",h);
    }
    else if(h==12)
    {
      printf("%d AM \n",h);
    }
    else if(h>12)
    {

      printf("%d PM \n",h-12);
    }
  }
}
