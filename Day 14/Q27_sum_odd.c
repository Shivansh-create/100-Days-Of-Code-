#include <stdio.h>
int main() {
    int n, sum = 0, count = 0, i = 1;
    printf("Enter n: ");
    scanf("%d", &n);
    while(count < n) {
        if(i % 2 != 0) { sum += i; count++; }
        i++;
    }
    printf("Sum: %d\n", sum);
    return 0;
}