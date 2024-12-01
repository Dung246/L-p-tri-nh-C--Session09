#include <stdio.h>

int main() {
    int arr[100];         
    int currentLength = 0;  
    int numElements, deletePosition;
    printf("Moi ban nhap so phan tu : ");
    scanf("%d", &numElements);
    if (numElements < 1 || numElements > 100) {
        printf("Phan tu khong hop le.\n");
        return 1;
    }
    printf("Nhap so phan tu :\n");
    for (int i = 0; i < numElements; i++) {
        printf(" %d: ", i + 1);
        scanf("%d", &arr[i]);
    } 
    currentLength = numElements;
    printf("\nMang ban dau :\n");
    for (int i = 0; i < currentLength; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Moi nhap vi tri ban muon xoa : ", currentLength - 1);
    scanf("%d", &deletePosition);

    if (deletePosition < 0 || deletePosition >= currentLength) {
        printf("Khong hop le .\n");
        return 1;
    }

    for (int i = deletePosition; i < currentLength - 1; i++) {
        arr[i] = arr[i + 1]; 
    }
    currentLength--;  
    printf("\nMang moi sau khi bi xoa la :\n");
    for (int i = 0; i < currentLength; i++) {
        printf("%d ", arr[i]);
    }

}
