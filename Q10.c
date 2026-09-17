#include<stdio.h>
int main () {
int size; float bill; int quantity; int crust; float charges; int hour; float discount; int answer; int option; 
int delivery; char extra;
    printf("Enter Pizza Size\n 1=For Small\n 2=For Medium\n 3=For Large\n \n");
    scanf("%d", &size);
    switch (size){
    case 1: printf("Small Size Selected\n");
    break;
    case 2: printf("Medium Size Selected\n");
    break;
    case 3: printf("Large Size Selected\n");
    break;
    }
    printf("enter your pizza quantity(1 to 3)\n");
    scanf("%d", &quantity);
    if (quantity==1){
      bill=8;
    }else if (quantity==2) {
        bill=15;
    } else if (quantity==3) {
        bill=21;}
    else if(quantity>3) {
        bill=quantity*8;
    }else {
        printf("Invalid quantity");
    }

    printf("enter your crust 1=for regular,2=for thin,3=for stuffed\n");
    scanf("%d",&crust);
    switch(crust) {
        case 1: bill=bill+0;
        break;
        case 2: bill=bill+1;
        break;
        case 3: bill=bill+2;
        break;
        default: printf("Invalid entered crust\n");
        break;
    }

    printf("\nDo you want extra cheeze(Y/N)?\n");
    scanf(" %c", &extra);
    if(extra=='Y'||extra=='y') { charges=1.5;
    bill+=1.5;
    }else if (extra=='N'||extra=='n') { charges=0;
        bill=bill;
    }else {
        printf("\nyou giving wrong answer\n");
    }

    printf("\nenter your hour(0 to 23)\n");
    scanf("%d", &hour);
    if(hour==11|| hour==12||hour==13||hour==14) {
        discount=(bill*10)/100;
    }else {discount=0;}
    bill=bill-discount;
    printf("You have your student Id card(Y/N)?");
    scanf(" %c", &answer);
    if(answer=='y'||answer=='Y') {
        bill-=2;
        if (bill<0) {
            bill=0;
        }else {bill=bill;}
    }else {bill=bill;}
    

     printf("enter options P=for pick,D=delivey\n");
    scanf(" %c", &option);
    if (option=='P'||option=='p') { delivery=0;
        bill=bill;
    }else if (option=='D'||option=='d') { delivery=3;
          bill+=3;
    }else {
        printf("please select correct option\n");
    }

    printf("\n----------------(Your Bill Reciept)-------------------\n");
    printf("Size of pizza is %d\n",size);
    printf("Quantity of pizza is %d\n",quantity);
    printf("crust of pizza is 1=for regular,2=for thin,3=for stuffed your is %d\n ",crust);
    printf("Extra cheese charges is $%d\n",charges);
    printf("discount is $%.2f\n",discount);
    printf("delivery charges is %d\n", delivery);
    printf("Now Your Final bill is %.2f\n",bill);
    if ((crust == 'S' || crust == 's' ) && quantity == 3) {
        printf("\nYou get free garlic bread\n");
    }else {
        printf("\nThank you for your order!\n");
    }
    return 0;
}