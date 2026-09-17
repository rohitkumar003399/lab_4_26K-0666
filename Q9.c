#include<stdio.h>
int main() {
    int total;
    char option;
    printf("enter your ordered total\n");
    scanf("%d", &total);
    printf("enter options P=for pick,D=delivey\n");
    scanf(" %c", &option);
    if (option=='P'||option=='p') {
        total=total;
    }else if (option=='D'||option=='d') {
        total+=3;
    }else {
        printf("please select correct option\n");
    }
    printf("your total cost is %d", total);

    return 0;
}