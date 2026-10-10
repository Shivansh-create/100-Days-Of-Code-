#include <stdio.h>
int main() {
    int n;
    float sum = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++) {
        sum += (float)(2*i) / (4*i - 1);
    }
    printf("Sum: %.4f\n", sum);
    return 0;
}