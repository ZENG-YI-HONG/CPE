#include <stdio.h>

int main() {
    // 宣告並初始化5x3的矩陣
    int matrix[5][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {10, 11, 12},
        {13, 14, 15}
    };

    // 輸出每個元素
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            printf("(%d,%d)",i,j);
        }
        printf("\n");
    }

    return 0;
}

