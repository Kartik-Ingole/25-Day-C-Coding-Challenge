/*Day 6 (10/11/2023) Task 2
Calculate the Sum of Natural Numbers*/

#include <stdio.h>
void main()
{
  int num,sum,i;
  printf("Enter a number: ");
  scanf("%d",&num);
  for (i = 1; i <= num; ++i) 
  {
    sum += i;
  }
  printf("Sum = %d",sum);
}

//Kartik Ingole