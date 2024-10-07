#include <stdio.h>
#要注意泡沫排序法要陣列-1否則會超出範圍 
int main() {
    int m, n, i, j, k, tep;
    scanf("%d %d", &j, &n);
    int z[j]; // 修改陣列大小

    for (i = 0; i < j; i++) {
        scanf("%d", &m);
        z[i] = m;
    }

    for (k = 0; k < j - 1; k++) {
        for (i = 0; i < j - 1; i++) {
            if (z[i] % n > z[i + 1] % n) {
                tep = z[i];
                z[i] = z[i + 1];
                z[i + 1] = tep;
            } else if (z[i] % n == z[i + 1] % n) {
                if (z[i] % 2 == 0 && z[i + 1] % 2 != 0) {
                    tep = z[i];
                    z[i] = z[i + 1];
                    z[i + 1] = tep;
                } else if (z[i] % 2 != 0 && z[i + 1] % 2 != 0) {
                    if (z[i] < z[i + 1]) {
                        tep = z[i];
                        z[i] = z[i + 1];
                        z[i + 1] = tep;
                    }
                } else if (z[i] % 2 == 0 && z[i + 1] % 2 == 0) {
                    if (z[i] > z[i + 1]) {
                        tep = z[i];
                        z[i] = z[i + 1];
                        z[i + 1] = tep;
                    }
                }
            }
        }
    }

    printf("%d %d\n", j, n);
    for (i = 0; i < j; i++) {
        printf("%d\n", z[i]);
    }
    printf("0 0\n");

    return 0;
}

