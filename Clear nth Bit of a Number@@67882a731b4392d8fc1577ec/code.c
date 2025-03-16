#include <stdio.h>

int main() {
    int num, bit;
    scanf("%d %d", &num, &bit);
    
    // Extract the value of the bit at position 'bit'
    int result = (num >> bit);
    
    printf("%d", result);
    return 0;
}