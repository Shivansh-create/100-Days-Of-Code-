#include <stdio.h>
int main() {
    int n, arr[100], min, max;
    printf("Enter n: ");
    scanf("%d", &n);
    scanf("%d", &arr[0]);
    min = max = arr[0];
    for(int i=1; i<n; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] > max) max = arr[i];
        if(arr[i] < min) min = arr[i];
    }
    printf("Max: %d, Min: %d\n", max, min);
    return 0;
}