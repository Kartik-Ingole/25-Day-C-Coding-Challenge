/*Day 6 (10/11/2023) Task 3
Find Factorial Of A Number*/

#include <stdio.h>
void main()
{
  int num,i;
  unsigned long long factorial=1;
  printf("Enter To Number To Find It's Factorial: ");
  scanf("%d",&num);
  if (num<0)
    printf("Error, Factorial Of Negative Number Does Not Exist");
  //else if (num==0)
  else
  {
    for (i=1; i<=num; ++i)
      {
      factorial *= i;
      }
      printf("The Factorial Of %d is %llu",num,factorial);
  }
}

//Kartik Ingole