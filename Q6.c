#include<stdio.h>
int main () {
int Bill;
int discount;
int hour;
printf("enter your bill\n ");
scanf("%d", &Bill);
printf("\nenter your hour(0 to 23)\n");
scanf("%d", &hour);
if(hour==11|| hour==12||hour==13||hour==14) {
    discount=(Bill*10)/100;
}else {discount=0;}
Bill=Bill-discount;
printf("\nyour final bill is $%d\n",Bill);
return 0;

}