#include <stdio.h>

int main() {
    int L, D, K, P;

    scanf("%d %d", &L, &D);
    scanf("%d %d", &K, &P);

    int gastoKm = L * K;

    int gastoPed = 0;
    int i = D;

    while(i <= L) {
        gastoPed += P;
        i += D;
    }

    int gastoTotal = gastoKm + gastoPed;
    printf("%d\n", gastoTotal);

    return 0;
}