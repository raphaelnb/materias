#include <stdio.h>

int main() {
    int a, b, c, x, y, z;

    scanf("%d %d %d", &a, &b, &c);
    scanf("%d %d %d", &x, &y, &z);

    int areaNavio = x * y;
    int areaContainer = a * b;

    int containeres = 0;
    int containereresPorAndar; 


    while (areaNavio >= areaContainer) {
        containereresPorAndar +=  1;
        areaNavio -= areaContainer;
    }

    while(c <= z) {
        containeres += containereresPorAndar;
        c += c;
    }

    printf("%d\n", containeres);

    return 0;
}