#include <stdio.h>
int main() {
    float total;
    int crust;
    printf("Enter current total cost: $");
    scanf("%f", &total);
    printf("Enter crust type:\n");
    printf("1. Regular crust (+$0)\n");
    printf("2. Thin crust (+$1)\n");
    printf("3. Stuffed crust (+$2)\n");
    scanf("%d", &crust);
    if (crust == 1) {
        total = total + 0;
    }
    else if (crust == 2) {
        total = total + 1;
    }
    else if (crust == 3) {
        total = total + 2;
    }
    else {
        printf("Invalid crust choice.\n");
        return 1;
    }
    printf("Updated bill total: $%.2f\n", total);
    return 0;
}