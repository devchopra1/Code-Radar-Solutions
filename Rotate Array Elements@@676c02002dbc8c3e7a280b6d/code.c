#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int k;
    scanf("%d", &k); 
    k = k % n;           
    if (k > 0) {
        int temp[n];

        for (int i = 0; i < n; i++) {
            temp[(i + k) % n] = arr[i];
        }
        
        for (int i = 0; i < n; i++) {
            arr[i] = temp[i];
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%d \n ", arr[i]);
    }
    printf("\n");
    
    return 0;
}