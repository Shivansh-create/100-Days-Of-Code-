#include <stdio.h>
int main() {
    int n, arr[100], key, found = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    for(int i=0; i<n; i++) scanf("%d", &arr[i]);
    printf("Enter key: ");
    scanf("%d", &key);
    for(int i=0; i<n; i++) {
        if(arr[i] == key) { found = 1; printf("Found at index %d\n", i); break; }
    }
    if(!found) printf("Not found\n");
    return 0;
}