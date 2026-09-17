#include<stdio.h>
int main() {
    int Q;
    int A=0;
    printf("enter your pizza quantity (1 to 3)\n");
    scanf("%d",&Q);
    if(Q==1) {
        A=8;
    }else if(Q==2) {
        A=15;
    }else if(Q==3) {
        A=21;
    }else {
        printf("invalid Quantity");
        return 0;
    }
    printf("\nyour %d pizza amount is $%d\n",Q,A);

 
    return 0;
}