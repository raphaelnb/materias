#include <iostream>
using namespace std;

int main()
{
    int num[5], quad[5], cubo[5], soma[5], i, j, total;

    for (i = 0; i < 5; i++)
    {
        num[i] = i;
        quad[i] = i * i;
        cubo[i] = i * i * i;
        soma[i] = num[i] + quad[i] + cubo[i];
        total += soma[i];
    }
    char chamada[4][12] = {"numeros\t", "quadrado\t", "cubo\t", "soma\t"};
    int *tab[] = {num, quad, cubo, soma};

    cout << "SAIDA:\n";

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            cout << tab[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "total geral\t\t\t" << total << endl;
    return 0;
}