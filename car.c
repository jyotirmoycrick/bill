#include<stdio.h>
int main()
{

    int vehicle;

    printf("Types of vehicle \n");

    printf("1 for heavy vehicle \n");

    printf("2 for personal car \n");

    printf("3 for two wheeler \n");

    printf("enter the vehicle type allot number : ");

    scanf("%d",&vehicle);

    int time;

    printf("enter the parking time in hours : ");
    scanf("%d",&time);

    switch(vehicle)
    {
        case 1: printf("your vehicle type is heavy \n");

        printf("Your total bill : %d \n",20*time );

        break;

        case 2: printf("your vehicle type is personal car \n");

        printf("Your total bill : %d \n",10*time);

        break;

        case 3: printf("your vehicle type is two wheller \n");

        printf("Your total bill : %d \n",5*time);

        break;

        default : printf("you don't need to pay anything your parking is free \n");
    }

    printf("Thank you \n");

    return 0;

}