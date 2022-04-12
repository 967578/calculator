//Program for calculator
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

int main()
{
  //code here
  int size;
  char operation;
  while(1)
  {
    printf("***\nEnter 0 to exit in operations\n***\n");
    printf("How many numbers would you like to enter: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter %d numbers please: ", size);
    for(int i=0; i < size; i++)
        scanf("%d", &arr[i]);
    printf("What operation would you like to apply here: ");
    fflush(stdin);
    scanf("%c", &operation);
    int result = 0;
    float flo_result = 0.00;
    switch(operation)
    {
        case '+':
            for(int i=0; i < size; i++)
                result += arr[i];
            printf("Summation is: %d\n", result);
            break;
        case '-':
            for(int i=0; i < size; i++)
                result -= arr[i];
            printf("Subtraction is: %d\n", result);
            break;
        case '*':
            for(int i=0; i < size; i++)
                result *= arr[i];
            printf("Multiplication is: %d\n", result);
            break;
        case '/':
            flo_result = arr[0];
            for(int i=1; i < size; i++)
                flo_result /= arr[i];
            printf("Division is: %f\n", flo_result);
            break;
        case '0':
            exit(1);
        default :
            printf("Wrong input\n");
            break;
    }
  }
  return 0;
}
