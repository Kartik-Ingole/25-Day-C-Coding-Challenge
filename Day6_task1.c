/*Day 6 (10/11/2023) Task 1
Check Whether a Character is an Alphabet or not*/

#include <stdio.h>

void main()
{
  char alpha;
  printf("Enter A Character: ");
  scanf("%c",&alpha);
  if(alpha>='A' && alpha<='Z' || alpha>='a' && alpha<='z')
  {
    printf("%c is a character.",alpha);
  }
  else
  {
    printf("%c is not a character.",alpha);
  }
}

//Kartik Ingole