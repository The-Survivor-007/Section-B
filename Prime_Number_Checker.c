//you want to check if a given number is a prime number or not .
//write a c program that takes an integer input and check if it is a prime number or not.
#include <stdio.h>
#include <stdbool.h>
bool isPrime(int);
int main()
{
    printf("**********      PRIME NUMBER CHECKER        **********\n");
    printf("Enter a number to check if it is PRIME NUMBER or not : ");
    int number;
    scanf("%d",&number);
    if(isPrime(number))
    printf("%d is Prime number", number);
    else
    printf("%d is not a Prime number", number);
}

bool isPrime(int n)
{
    int count=0;
    for(int i=1; i<=(n/2);i++)
    if(n%i==0)
    count++;
    if(count==1)
    return true;
    else
    return false;
}