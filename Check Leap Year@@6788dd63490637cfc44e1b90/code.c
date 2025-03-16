#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    if (n % 4 == 0) {
            if (n % 100 != 0) {
            return "Leap year.";
        }
        else {
            if (n % 400 == 0) {
                return "Leap year";
            }
        }
    }
    else {
        return "Not leap year";
    return 0;
}