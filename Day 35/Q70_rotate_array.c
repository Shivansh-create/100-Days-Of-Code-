#include <stdio.h>
int main() {
    int n, arr[100], k, temp[100];
    printf("Enter n: ");
    scanf("%d", &n);
    for(int i=0; i<n; i++) scanf("%d", &arr[i]);
    printf("Enter k: ");
    scanf("%d", &k);
    k = k % n;
    for(int i=0; i<n; i++) temp[(i+k)%n] = arr[i];
    for(int i=0; i<n; i++) printf("%d ", temp[i]);
    printf("\n");
    return 0;
}