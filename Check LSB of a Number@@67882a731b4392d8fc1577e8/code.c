#include<stdio.h>
#include<conio.h>
int main() {
    int n,b;
    scanf("%d",&n);
    b = n && 1;
    if (b == 1)
    printf("Set");
    else
    printf("Not Set");
}