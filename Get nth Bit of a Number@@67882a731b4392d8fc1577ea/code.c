#include <stdio.h>

int main() {
    int num,bit,a;
    scanf("%d %d", &num,&bit);
    a = num ^ bit;
    printf("%d",a);
    return 0;
}