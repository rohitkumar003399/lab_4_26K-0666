#include<stdio.h>
int main() {
int Bill;
char Answer;
printf("enter your bill");
scanf("%d", &Bill);
printf("You have your student Id card(Y/N)?");
scanf(" %c", &Answer);

if(Answer=='y'||Answer=='Y') {
    Bill-=2;
    if(Bill<0) {
        Bill=0;
    }else {
        Bill=Bill;
    }
}else {
    Bill-=0;
}
printf("your final bill is %d", Bill);
return 0;
}