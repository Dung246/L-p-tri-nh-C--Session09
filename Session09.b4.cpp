#include <stdio.h>

int main() {
    int arr[100];  
    int currentLength = 0;  
    int choice, numElements, element, position;
    while (1) {
        printf("\nMENU\n");
        printf("1. Enter the array\n");
        printf("2. Display array\n");
        printf("3. Add element\n");
        printf("4. Edit element\n");
        printf("5. Delete element\n");
        printf("6. Exit\n");
        printf("Your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Moi ban nhap vao mang : ");
                scanf("%d", &numElements);
                if (numElements < 1 || numElements > 100) {
                    printf("So phan tu khong hop le.\n");
                    break;
                }
                printf("Moi ban nhap so nguyen :\n");
                for (int i = 0; i < numElements; i++) {
                    printf("So nguyen %d: ", i + 1);
                    scanf("%d", &arr[i]);
                }
                currentLength = numElements;  
                break;

            case 2:
                if (currentLength == 0) {
                    printf("Mang dang trong\n");
                } else {
                    printf("Mang nguyen to : ");
                    for (int i = 0; i < currentLength; i++) {
                        printf("%d ", arr[i]);
                    }
                    printf("\n");
                }
                break;
            case 3:
                if (currentLength == 100) {
                    printf("Mang da day.\n");
                    break;
                }

                printf("Gia tri can them: ");
                scanf("%d", &element);

                printf("Moi ban nhap vi tri muon them : ", currentLength);
                scanf("%d", &position);

                if (position < 0 || position > currentLength) {
                    printf("Khong hop le.\n");
                    break;
                }
                for (int i = currentLength; i > position; i--) {
                    arr[i] = arr[i - 1];
                }
                currentLength++;
                break;

            case 4:
               
                printf("Vi tri ban muon thay doi : ", currentLength - 1);
                scanf("%d", &position);

                if (position < 0 || position >= currentLength) {
                    printf("Khong hop le\n");
                    break;
                }

                printf("Gia tri moi cho vi tri  %d: ", position);
                scanf("%d", &element);
                arr[position] = element;
                break;
            case 5:
                printf("Moi ban chon vi tri muon xoa: ", currentLength - 1);
                scanf("%d", &position);
                if (position < 0 || position >= currentLength) {
                    printf("Vi tri khong hop le.\n");
                    break;
                }
                for (int i = position; i < currentLength - 1; i++) {
                    arr[i] = arr[i + 1];
                }
                currentLength--;  
                break;
            case 6:
                printf("Thoat chuong trinh\n");
                return 0;
            default:
                printf("Moi ban thu lai.\n");
        }
    }

    return 0;
}
