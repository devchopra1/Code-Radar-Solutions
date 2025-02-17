#include<stdio.h>
int main() {
    char name[999], hobby[999];
    int age;
    scanf("%s %d %s",&name,&age,&hobby);
    printf("Name: %s\n",name);
    printf("Age: %d\n",age);
    printf("Hobby: %s\n",hobby);
}