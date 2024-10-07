#include <stdio.h>

int main() {
    int a[8] = {2, 1, 8, 9, 6, 7, 5, 4};
    int i, compare, temp;

	printf("未排序\n");
	for (i = 0; i < 8; i++)
	{
        printf("%d ", a[i]);
    }
    // 對陣列a進行從小到大的插入排序
    for (i = 0; i < 8; i++) {
        temp = a[i];
        compare = i;
        while (compare > 0 && temp < a[compare - 1]) {
            a[compare] = a[compare - 1];
            compare--;
        }
        a[compare] = temp;
    }
  

   
    printf("\n排序後的陣列a：\n");
    for (i = 0; i < 8; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}

