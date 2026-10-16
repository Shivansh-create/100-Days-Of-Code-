#include <stdio.h>
int main() {
    int r, c, mat[10][10], sum=0;
    printf("Enter rows and cols: ");
    scanf("%d %d", &r, &c);
    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            scanf("%d", &mat[i][j]);
            sum += mat[i][j];
        }
    }
    printf("Sum: %d\n", sum);
    return 0;
}