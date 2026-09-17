#include<stdio.h>
int main () {
    int Q;
    char Crust;
    printf("enter your pizza quantity\n");
    scanf("%d",&Q);
    printf(" \nenter your crust R=for regular,T=for thin,S=for Stuffed\n");
    scanf(" %c", &Crust);
    if ((Crust == 'S' || Crust == 's' ) && Q == 3) {
        printf("\nYou get free garlic bread\n");
    }else {
        printf("\nThank you for your order!\n");
    }
return 0;


}