#include <stdio.h>
int main() {
    float c;
    printf("Enter temp in Celsius: ");
    scanf("%f", &c);
    printf("Fahrenheit: %.2f\n", (c * 9.0/5.0) + 32);
    return 0;
}