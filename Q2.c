#include <stdio.h>
int main() {
int P=8;
int Q;
printf("Enter quantity of small pizza\n");
scanf("%d",&Q);
if (Q==1){
printf("\nYour total is %d", P);
} else if (Q>1) {
    printf("Check our multi-pizza Deals");
} else {
    printf("Invalid Quantity");
}
return 0;
}