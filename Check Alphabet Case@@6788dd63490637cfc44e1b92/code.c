#include<stdio.h>
int main() {
    char a;
    scanf("%c",&a);
    if (a >= 'a')
    printf("Lowercase");
    else if (a >= 'A')
    printf("Uppercase");
    else
    printf("Not an alphabet");
}