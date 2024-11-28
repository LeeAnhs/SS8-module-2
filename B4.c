#include <stdio.h>

int main() {
    int arr[3][3] = { {2, 3, 4}, {1, 6, 8}, {8, 6, 4} };
    int max = arr[0][0];
    int i, j;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }
    printf("Phan tu lon nhat trong mang la: %d\n", max);
    return 0;
}
