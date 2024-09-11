#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    bool sunny = true;
    string result = sunny ? ";)" : ":(";
    cout << result << endl;

    double balance = 1234.56;
    double value;
    cout << "Escreva o valor: ";
    cin >> value;

    char credit_debt;
    cout << "Credito ou Debito: ";
    cin >> credit_debt;

    cout << "Balanço Anterior: " << balance << endl;
    
    balance += credit_debt == 'c' ? value : -value;

    cout << "Balanço Posterior: " << balance << endl;

    return 0;
}
