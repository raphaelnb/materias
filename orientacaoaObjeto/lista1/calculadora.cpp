#include <iostream>
using namespace std;

float calc(float, float, char);

int main() {
    float x, y;
    char z, novaOperacao;
    
    do {
        cout << "Digite dois operandos e um operador "; cin >> x >> y >> z;
        float res = calc(x, y, z);
        cout << "O resultado é "<< res;
        cout << "\nDeseja fazer outra operação? (s/n)"; cin >> novaOperacao;
    } while (novaOperacao == 's');
}

float calc(float x, float y, char operador) {
    float res;
    if (operador == '+') {
        res = x + y;
    } else if (operador == '-') {
        res = x - y;
    } else if (operador == '*') {
        res = x * y;
    } else if (operador == '/') {
            res = x / y;
    } else {
            cout << "Digite argumentos válidos";
        return 1;
    }
    return res;
} 