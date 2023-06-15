#include <stdio.h>

int main() {
    int Xm, Ym, Xr, Yr;

    scanf("%d %d %d %d", &Xm, &Ym, &Xr, &Yr);

    int distanciaHorizontal = Xr - Xm;
    int distanciaVertical = Yr - Ym;

    int distanciaTotal = distanciaHorizontal + distanciaVertical;

    printf("%d\n", distanciaTotal);

    return 0;
}