#include <stdio.h>
#include <math.h>
int main() {
    int n, first, last, digits = 0, num;
    printf("Enter number: ");
    scanf("%d", &n);
    num = n;
    last = n % 10;
    while(n >= 10) { n /= 10; digits++; }
    first = n;
    int swapped = last * pow(10, digits) + (num % (int)pow(10, digits)) - last + first;
    printf("Swapped: %d\n", swapped);
    return 0;
}