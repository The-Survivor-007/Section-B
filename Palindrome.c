//You want to check if a give string is a palindrome or not. 
//Write a C program that takes a string input and checks if it is a palindrome .
#include <stdio.h>
#include <string.h>
void main()
{
    char word[20];
    char rev[20];

    printf("Enter a word to check whether it is palindrome or not : ");
    scanf("%s",word);
    strcpy(rev,word);
    strrev(rev);
    if(strcmp(rev,word)==0)
    printf("Palindrome");
    else
    printf("Not a Palindrome");
}