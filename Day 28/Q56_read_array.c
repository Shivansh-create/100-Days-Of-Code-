#include <stdio.h>
int main() {
    int n, arr[100];
    printf("Enter n: ");
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        printf("Element %d: ", i);
        scanf("%d", &arr[i]);
    }
    printf("Array elements: ");
    for(int i=0; i<n; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}