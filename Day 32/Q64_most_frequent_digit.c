#include <stdio.h>
int main() {
    int n, freq[10] = {0}, max_f = 0, ans = -1;
    printf("Enter number: ");
    scanf("%d", &n);
    while(n != 0) {
        freq[n % 10]++;
        n /= 10;
    }
    for(int i=0; i<10; i++) {
        if(freq[i] > max_f) { max_f = freq[i]; ans = i; }
    }
    printf("Most frequent digit: %d\n", ans);
    return 0;
}