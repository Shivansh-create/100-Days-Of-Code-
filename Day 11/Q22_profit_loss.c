#include <stdio.h>
int main() {
    float cp, sp, diff;
    printf("Enter CP and SP: ");
    scanf("%f %f", &cp, &sp);
    diff = sp - cp;
    if(diff > 0) printf("Profit: %.2f%%\n", (diff/cp)*100);
    else if(diff < 0) printf("Loss: %.2f%%\n", (-diff/cp)*100);
    else printf("No profit no loss\n");
    return 0;
}