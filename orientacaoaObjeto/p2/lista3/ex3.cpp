
#include <iostream>
using namespace std;

int main()
{

    int matriz[4][4] = {};
    int soma = 0;
    int i, j;
    cout << "Digite os numeros\n";

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            scanf("%d", &matriz[i][j]);
            soma += matriz[i][j];
        }
    }

    int multi[4];

    int sub = 0;

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j = i; j++)
        {
            multi[j] += matriz[i][j];
            sub += multi[j];
        }
    }

    int resMult = multi[0] * multi[1] * multi[2] * multi[3];
    int resSoma = soma - sub;

    cout << resMult << "\n"
         << resSoma << endl;

    return 0;
}