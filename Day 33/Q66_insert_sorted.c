#include <stdio.h>
int main() {
    int n, arr[100], num, i;
    printf("Enter n (sorted array): ");
    scanf("%d", &n);
    for(i=0; i<n; i++) scanf("%d", &arr[i]);
    printf("Enter element to insert: ");
    scanf("%d", &num);
    for(i=n-1; (i >= 0 && arr[i] > num); i--) arr[i+1] = arr[i];
    arr[i+1] = num;
    n++;
    for(i=0; i<n; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}