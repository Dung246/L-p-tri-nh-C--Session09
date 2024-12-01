#include <stdio.h>

int main() {
    int arr[100]; 
    int currentLength = 0; 
    int numElements, addValue, addIndex;
    printf("Moi ban nhap : ");
    scanf("%d", &numElements);
    if (numElements < 1 || numElements > 100) {
        printf("\n");
        return 1;
    }
    printf("Nhap cac phan tu :\n");
    for (int i = 0; i < numElements; i++) {
        printf(" %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    currentLength = numElements;
    printf("Nhap vao gia tri ban muon: ");
    scanf("%d", &addValue);
    printf("Moi nhap vao vi tri co gia tri: ", currentLength);
    scanf("%d", &addIndex);
    if (addIndex < 0 || addIndex > currentLength) {
        printf("Khong hop le \n");
        return 1;
    }
    if (addIndex >= currentLength) {
        arr[addIndex] = addValue;
        currentLength = addIndex + 1; 
    } else {
        for (int i = currentLength; i > addIndex; i--) {
            arr[i] = arr[i - 1];
        }
        arr[addIndex] = addValue;
        currentLength++;  
    }
    printf("Mang duoc them la: ");
    for (int i = 0; i < currentLength; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
