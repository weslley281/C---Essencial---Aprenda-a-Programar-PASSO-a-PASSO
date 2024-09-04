#include <iostream>
#include <cstdio>
using namespace std;

int main(int argc, char const *argv[])
{
    int entry;
    cout << "Escreva um numero: ";
    cin >> entry;

    printf("%d eh maior que 10? %d\n", entry, entry > 10);
    printf("%d eh maior e igual a 10? %d\n", entry, entry >= 10);

    return 0;
}
