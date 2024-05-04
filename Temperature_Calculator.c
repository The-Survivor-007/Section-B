//you want to convert temperatures between Celsius and Fahrenheit.
//write a c program that converts temperatures from Celsius to Fahrenheit and vice versa.
#include <stdio.h>
#include <stdbool.h>
void main()
{
    printf("**********************          HELLO THIS IS TEMPERATURE CALCULATOR          **********************\n");
    bool flag = true;
    while(flag)
    {
        printf("Press 1 for :    Celsius -------> Fahrenheit\n");
        printf("Press 2 for :    Fahrenheit -------> Celsius\n");
        printf("Enter your choice : ");
        int choice;
        double fahrenheit,celsius;
        scanf("%d",&choice);
        switch (choice)
        {
            case 1:
            printf("Enter Temperature in Celsius : ");
            scanf("%lf",&celsius);
            fahrenheit = 1.8*celsius+32;
            printf("%lf °C -------> %lf °F \n",celsius,fahrenheit);
            break;
            case 2:
            printf("Enter Temperature in Fahrenheit : ");
            scanf("%lf",&fahrenheit);
            celsius = (fahrenheit-32)/1.8;
            printf("%lf °F -------> %lf °C \n",fahrenheit,celsius);
            break;
            default:
            printf("Please try again , You have entered  wrong choice!\n");
        }
        printf("Do you want to exit ? Press 1 to Continue  |  Press 0 to Exit :");
        int k;
        scanf("%d",&k);
        if(k==1)
            flag=true;
        else
            flag=false;
    }
}