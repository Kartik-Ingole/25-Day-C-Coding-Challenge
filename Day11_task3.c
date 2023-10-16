/*Day 11 (10/16/2023) Task 3
Simple Calculator Using switch...case*/

#include <stdio.h>
int main()
{
    float num1,num2;
    int in;
    
    printf("Enter (SrNo.)\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
    scanf("%d",&in);
    
    printf("Enter Two Numbers: ");
    scanf("%f %f",&num1,&num2);
    
    switch (in)
    {
    case 1 :
        printf("Addition is: %.25f",num1+num2);
        break;
    
    case 2 :
        printf("Subtraction is: %.2f",num1-num2);
        break;

    case 3 :
        printf("Multoplication is: %.2f",num1*num2);
        break;

    case 4 :
        printf("Division is: %.2f",num1/num2);
        break;

    default:
        printf("Enter correct option.");
        break;
    }
return 0;
}

//KARTIK INGOLE

