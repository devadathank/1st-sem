/*Write a program to find the grace marks for a student using switch. The user should enter the class obtained by the student and the number of subjects he has failed in. use the following logic:
If the student gets first class and the number of subjects he failed in is greater than 3, then he does not get any grace. Otherwise the grace is 5 marks per subject.
If the student gets second class and the number of subjects he failed in is greater than 2, then he does not get any grace. Otherwise the grace is 4 marks per subject.
If the student gets third class and the number of subjects he failed in is greater than 1, then he does not get any grace. Otherwise the grace is of 5 marks.
*/
#include<stdio.h>
int main()
{
  int class,n,choice,fail;
  printf("Enter the number of subject \n");
  scanf("%d",&n);
  printf(" 1.First class\n 2.Second class\n 3.Third class\n");
  printf("\nSelect your choice:  \n");
  scanf("%d",&choice);
  if(choice>0 && choice<=3)
  {
    printf("Enter the number of subject failed:  \n");
    scanf("%d",&fail);
    switch(choice)
    {
      case 1:
      if(fail>=0 && fail<=3)
      {
          n=n*5;
          printf("Your grace mark is %d\n",n);
      }
      else
      {
        printf("You don't get any grace mark\n");
      }
      break;

      case 2:
      if(fail>=0 && fail<=2)
      {
          n=n*4;
          printf("Your grace mark is %d\n",n);
      }
      else
      {
        printf("You don't get any grace mark\n");
      }
      break;

      case 3:
      if(fail>=0 && fail<=1)
      {
          n=n*5;
          printf("Your grace mark is %d\n",n);
      }
      else
      {
        printf("You don't get any grace mark\n");
      }
      break;
    }
  }
  else
  {
    printf("Please enter a correct choice \n\n");
  }

}
