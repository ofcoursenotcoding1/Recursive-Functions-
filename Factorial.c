// Factorial of a given number using recursive function 

#include <stdio.h>

int fact(int);      // Function declaration
int main()
{
    int num, f;
    printf("Enter the number ");
    scanf("%d\n", &num);
    f = fact(num);     // Function call
    printf("The factorial of the given number is %d", f); // Executed after the 18th line is fully executed and no recursive is to passed

    return 0;
}
int fact(int num)
{ // Function Definition
    if (num <= 1)
    {
        return 1;
    }
    else
    {
        return (num * fact(num - 1)); // Recrusive Function
    }
}