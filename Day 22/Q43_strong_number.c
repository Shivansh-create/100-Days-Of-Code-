#include <stdio.h>
int fact(int n) {
    int f=1;
    for(int i=1; i<=n; i++) f*=i;
    return f;
}
int main() {
    int n, sum=0, temp;
    printf("Enter number: ");
    scanf("%d", &n);
    temp = n;
    while(temp != 0) {
        sum += fact(temp % 10);
        temp /= 10;
    }
    if(sum == n) printf("Strong Number\n");
    else printf("Not a Strong Number\n");
    return 0;
}