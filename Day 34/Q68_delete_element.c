#include <stdio.h>
int main() {
    int n, arr[100], pos;
    printf("Enter n: ");
    scanf("%d", &n);
    for(int i=0; i<n; i++) scanf("%d", &arr[i]);
    printf("Enter pos to delete (0-based): ");
    scanf("%d", &pos);
    for(int i=pos; i<n-1; i++) arr[i] = arr[i+1];
    n--;
    for(int i=0; i<n; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}