#include <stdio.h>

int find(int arr[], int size, int value) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == value) {
            return i; 
        }
    }
    return -1;
}

int main() {

    int a[] = {4,32,34,64,38};
    int size = sizeof(a) / sizeof(int);

    
    int value = 38;

    
    int position = find(a, size, value);

    
    if (position != -1) {
        printf("Gia tri %d duoc tim thay tai vi tri %d.\n", value, position);
    } else {
        printf("Gia tri %d khong co trong mang.\n", value);
    }

    return 0;
}

