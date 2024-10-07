#include <stdio.h>

int main() {
    char a[100][100];
    int i, j, k, m, n;
    scanf("%d", &j);

    for (int o = 0; o < j; o++) {
        scanf("%d %d", &m, &n);

        // 讀取矩陣
        for (i = 0; i < n; i++) {
            for (k = 0; k < m; k++) {
                scanf(" %c", &a[i][k]);
            }
        }

        int count = 0;

        // 遍歷矩陣的每一行
        for (i = 0; i < n - 1; i++) {
            // 遍歷每一行的字符
            for (k = i + 1; k < n; k++) {
                int match = 1;

                // 判斷相鄰行的相應位置的字符是否相等
                for (int l = 0; l < m; l++) {
                    if (a[i][l] != a[k][l]) {
                        match = 0;
                        break;
                    }
                }

                if (match) {
                    count++;
                    break; // 一旦發現相同前綴，就停止比較該行
                }
            }
        }

        // 輸出結果
        printf("%d\n", m * n - count);
    }

    return 0;
}

