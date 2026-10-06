#include <stdio.h>
int main() {
    char c;
    printf("Enter a character: ");
    scanf(" %c", &c);
    if(c >= 'A' && c <= 'Z') printf("Uppercase\n");
    else if(c >= 'a' && c <= 'z') printf("Lowercase\n");
    else if(c >= '0' && c <= '9') printf("Digit\n");
    else printf("Special character\n");
    return 0;
}