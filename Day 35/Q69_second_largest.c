#include <stdio.h>
int main() {
    int n, arr[100], max1, max2;
    printf("Enter n: ");
    scanf("%d", &n);
    for(int i=0; i<n; i++) scanf("%d", &arr[i]);
    max1 = max2 = -1e9;
    for(int i=0; i<n; i++) {
        if(arr[i] > max1) { max2 = max1; max1 = arr[i]; }
        else if(arr[i] > max2 && arr[i] != max1) max2 = arr[i];
    }
    printf("Second largest: %d\n", max2);
    return 0;
}