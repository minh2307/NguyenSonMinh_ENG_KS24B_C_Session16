#include <stdio.h>

void array(int a[], int n); 

int main() {
    int a[] = {34, 346, 8, 2, 7, 4, 8, 5, 60}; 
    int n = sizeof(a) / sizeof(int);          
    printf("Mang co %d phan tu:\n", n);
    array(a, n); 
    return 0;
}
void array(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Phan tu trong mang a[%d] = %d\n", i, a[i]);
    }
}

