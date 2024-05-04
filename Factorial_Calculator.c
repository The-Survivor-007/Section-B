//you want to calculate the factorial of a given number.
//write a c program that takes an integer input and calculates its factorial.
#include <stdio.h>
#include <stdbool.h>
int factorial(int);
int main()
{
    printf("**********      FACTORIAL CALCULATOR        **********\n");
    bool flag=true;
    while(flag)
    {
        printf("Enter the number which you want to calculate its factorial : ");
        int number;
        scanf("%d",&number);
        printf("The factorial of %d is : %d\n",number,factorial(number));
        printf("Press 1 to Continue | Press 0 to EXIT :");
        int k;
        scanf("%d",&k);
        if(k==1)
        flag=true;
        else
        flag=false;
    }
}
int factorial(int n)
{
    if(n==1)
    return 1;
    else 
    return n*factorial(n-1);
}