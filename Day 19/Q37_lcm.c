#include <stdio.h>
int main() {
    int a, b, hcf, lcm;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    int x = a, y = b;
    while(x != y) {
        if(x > y) x -= y;
        else y -= x;
    }
    hcf = x;
    lcm = (a * b) / hcf;
    printf("LCM: %d\n", lcm);
    return 0;
}