#include <stdio.h>

int main() {
    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};  
    int position, newValue;
    printf("Mang hien tai :\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("Vi tri ban muon thay doi gia tri : ");
    scanf("%d", &position);
    if (position < 0 || position >= 10) {
        printf("Vi tri khong hop le \n");
        return 1; 
    }
    printf("Gia tri thay the gia tri cu la  %d: ", position);
    scanf("%d", &newValue);
    arr[position] = newValue;
    printf("Mang moi la :\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
