#include <stdio.h>
int main() {
    int a, b; char op;
    printf("Enter num1 op num2: ");
    scanf("%d %c %d", &a, &op, &b);
    switch(op) {
        case '+': printf("%d\n", a+b); break;
        case '-': printf("%d\n", a-b); break;
        case '*': printf("%d\n", a*b); break;
        case '/': if(b!=0) printf("%d\n", a/b); else printf("Div by 0\n"); break;
        case '%': if(b!=0) printf("%d\n", a%b); else printf("Div by 0\n"); break;
        default: printf("Invalid operator\n");
    }
    return 0;
}