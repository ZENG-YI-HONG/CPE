#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <algorithm>
#include <math.h>

using namespace std;

int num[1000] = {0};

int main() {
    int x, n, i, derivative;

    while (scanf("%d", &x) != EOF) {
        n = 0;
        while (scanf("%d", &num[n]) != EOF) {
            n++;
        }

        derivative = 0;
        for (i = 0; i < n; i++) {
            // Compute the derivative term by term
            derivative += num[i] * (n - i - 1) * pow(x, n - i - 2);
        }
        printf("%d\n", derivative);
    }

    return 0;
}

