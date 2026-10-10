#include <stdio.h>
int main() {
    int n, arr[100], p = 0, ng = 0, z = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] > 0) p++;
        else if(arr[i] < 0) ng++;
        else z++;
    }
    printf("Positive: %d, Negative: %d, Zero: %d\n", p, ng, z);
    return 0;
}