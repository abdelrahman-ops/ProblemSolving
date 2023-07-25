#include <stdio.h>
#include <math.h>

int main() {
    long A, B, C, D;
    scanf("%l %l %l %l", &A, &B, &C, &D);

    int res1 = pow(A, B);
    int res2 = pow(C, D);

    if (res1 > res2) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}