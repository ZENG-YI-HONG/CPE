#include <stdio.h>
#include <math.h>

int main() {
    float m, n;

    while (1) {
        scanf("%f %f", &m, &n);
        int cont = 0;

        if (m == 0 && n == 0) {
            break;
        }

        for (float i = m; i <= n; i++) {
            float sqrt_i = sqrt(i);
            int int_part = (int)sqrt_i;
			
            // 檢查浮點數的小數部分是否為零
            if (sqrt(i)-int_part == 0.00) {
                cont++;
            }
        }

        printf("%d\n", cont);
    }

    return 0;
}

