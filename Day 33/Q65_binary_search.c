#include <stdio.h>
int main() {
    int n, arr[100], key, l = 0, r, mid, found = 0;
    printf("Enter n (sorted array): ");
    scanf("%d", &n);
    for(int i=0; i<n; i++) scanf("%d", &arr[i]);
    r = n - 1;
    printf("Enter key: ");
    scanf("%d", &key);
    while(l <= r) {
        mid = (l+r)/2;
        if(arr[mid] == key) { found = 1; printf("Found at %d\n", mid); break; }
        else if(arr[mid] < key) l = mid + 1;
        else r = mid - 1;
    }
    if(!found) printf("Not found\n");
    return 0;
}