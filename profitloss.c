#include<stdio.h>
void main()

{
  int z=0;
  do
  {
    float x,cost,selling,profit,loos;
    printf("Enter the COST PRICE:  ");
    scanf("%f",&cost);
    printf("Enter the SELLING PRICE: ");
    scanf("%f",&selling);
    if(selling>cost)
    {
      x=selling-cost;
      profit=(x/cost)*100;
      printf("Seller made an profit of %f percentage  \n\n\n",profit);
    }
    else if(selling==cost)
    {
      printf("the seller neither made profit or loss \n\n\n");
    }
    else
    {
      x=cost-selling;
      loos=(x/cost )*100;
      printf("Seller made an loss of %f percentage  \n\n\n",loos);
    }
  }
  while(z>1);
}
