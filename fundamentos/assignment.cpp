#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int entry;
    cout << "Digite o valor inicial: ";
    cin >> entry;

    double result = entry + 10;
    cout << "Resultado da soma é: " << result << endl;

    result = entry - 10;
    cout << "Resultado da subitração é: " << result << endl;

    result = entry * 10;
    cout << "Resultado da multiplicação é: " << result << endl;

    result = entry / 10;
    cout << "Resultado da divisão é: " << result << endl;
    return 0;
}
