#include <stdio.h>

int main() {
    char a[100][100];
    int i, j, k, m, n;
    scanf("%d", &j);

    for (int o = 0; o < j; o++) {
        scanf("%d %d", &m, &n);

        // Ū���x�}
        for (i = 0; i < n; i++) {
            for (k = 0; k < m; k++) {
                scanf(" %c", &a[i][k]);
            }
        }

        int count = 0;

        // �M���x�}���C�@��
        for (i = 0; i < n - 1; i++) {
            // �M���C�@�檺�r��
            for (k = i + 1; k < n; k++) {
                int match = 1;

                // �P�_�۾F�檺������m���r�ŬO�_�۵�
                for (int l = 0; l < m; l++) {
                    if (a[i][l] != a[k][l]) {
                        match = 0;
                        break;
                    }
                }

                if (match) {
                    count++;
                    break; // �@���o�{�ۦP�e��A�N�������Ӧ�
                }
            }
        }

        // ��X���G
        printf("%d\n", m * n - count);
    }

    return 0;
}

