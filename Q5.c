#include<stdio.h>
int main() {
    float bill;
    char Charges;
    printf("enter your bill\n");
    scanf("%f", &bill);
    printf("\nDo you want extra cheeze(Y/N)?\n");
    scanf(" %c", &Charges);
    if(Charges=='Y'||Charges=='y') {
    bill+=1.5;
    printf("\nyour bill is %.2f", bill);
    }else if (Charges=='N'||Charges=='n') { 
        printf("\nyour bill is %.2f , bill");
    }else {
        printf("\nyou giving wrong answer");
    }


    return 0;
}