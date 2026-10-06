#include <stdio.h>
int main() {
    float a, b;
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    printf("Sum: %.2f\nDifference: %.2f\nProduct: %.2f\n", a+b, a-b, a*b);
    if(b!=0) printf("Quotient: %.2f\n", a/b);
    else printf("Division by zero error!\n");
    return 0;
}