#include <stdio.h>
#include <ctype.h>
int main() {
    char c;
    printf("Enter a character: ");
    scanf(" %c", &c);
    c = tolower(c);
    if(isalpha(c)) {
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u') printf("Vowel\n");
        else printf("Consonant\n");
    } else {
        printf("Not an alphabet\n");
    }
    return 0;
}