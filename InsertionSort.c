#include <stdio.h>

void insertionSort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;

    printf("Enter the no. of elements in array(Size of Array): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid array size.\n");
        return 1;
    }

    int arr[n];

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nOriginal array you entered:\n");
    printArray(arr, n);

    insertionSort(arr, n);

    printf("\nSorted array (Insertion Sort):\n");
    printArray(arr, n);

    return 0;
}