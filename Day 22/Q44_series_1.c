#include <stdio.h>
int main() {
    int n;
    float sum = 1.0;
    printf("Enter n: ");
    scanf("%d", &n);
    for(int i=2; i<=n; i++) {
        sum += (float)(2*i - 1) / (2*i);
    }
    printf("Sum: %.4f\n", sum);
    return 0;
}