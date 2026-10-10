#include <stdio.h>
#include <math.h>
int main() {
    int n, orig, sum = 0, digits = 0;
    printf("Enter number: ");
    scanf("%d", &n);
    orig = n;
    int temp = n;
    while(temp != 0) { digits++; temp /= 10; }
    temp = n;
    while(temp != 0) {
        sum += pow(temp % 10, digits);
        temp /= 10;
    }
    if(sum == orig) printf("Armstrong\n");
    else printf("Not Armstrong\n");
    return 0;
}