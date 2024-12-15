#include <stdio.h>

void update(int a[], int size, int Value, int pos) {
    if (pos >= 0 && pos < size) {
        a[pos] = Value; 
    } else {
        printf("Vi tri %d khong hop le!\n", pos);
    }
}
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
}

int main() {

    int a[] = {46, 25, 23, 7, 20};
    int size = sizeof(a)/sizeof(int);

    printf("Mang ban dau:\n");
    printArray(a, size);

    int Value = 67;
    int pos = 2; 
    update(a, size, Value, pos);

    printf("\nMang sau khi cap nhat:\n");
    printArray(a, size);

    return 0;
}

