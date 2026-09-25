#include <stdio.h>

int main() {
    float cp, sp, profit, loss, percentage;

    printf("Enter cost price: ");
    scanf("%f", &cp);

    printf("Enter selling price: ");
    scanf("%f", &sp);

    if(sp > cp) {
        profit = sp - cp;
        percentage = (profit / cp) * 100;
        printf("Profit = %.2f%%", percentage);
    }
    else if(cp > sp) {
        loss = cp - sp;
        percentage = (loss / cp) * 100;
        printf("Loss = %.2f%%", percentage);
    }
    else {
        printf("No Profit No Loss");
    }

    return 0;
}