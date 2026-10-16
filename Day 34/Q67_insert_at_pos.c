#include <stdio.h>
int main() {
    int n, arr[100], pos, num;
    printf("Enter n: ");
    scanf("%d", &n);
    for(int i=0; i<n; i++) scanf("%d", &arr[i]);
    printf("Enter pos (0-based) and num: ");
    scanf("%d %d", &pos, &num);
    for(int i=n; i>pos; i--) arr[i] = arr[i-1];
    arr[pos] = num;
    n++;
    for(int i=0; i<n; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}