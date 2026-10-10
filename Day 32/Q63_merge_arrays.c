#include <stdio.h>
int main() {
    int n1, n2, a[100], b[100], c[200];
    printf("Enter n1: "); scanf("%d", &n1);
    for(int i=0; i<n1; i++) scanf("%d", &a[i]);
    printf("Enter n2: "); scanf("%d", &n2);
    for(int i=0; i<n2; i++) scanf("%d", &b[i]);
    for(int i=0; i<n1; i++) c[i] = a[i];
    for(int i=0; i<n2; i++) c[n1+i] = b[i];
    printf("Merged: ");
    for(int i=0; i<n1+n2; i++) printf("%d ", c[i]);
    printf("\n");
    return 0;
}