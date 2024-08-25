#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    bool isAdmin = 1;
    cout << isAdmin << endl;

    char symbol = '#';
    cout << symbol << endl;   

    unsigned short int age = 28;
    cout << age << endl;

    float pi = 3.14;
    cout << pi << endl;

    double price = 39.99;
    cout << price << endl;

    long int quant = 56895364256;
    cout << quant << endl;

    cout << "Float tem " << sizeof(float) << " bytes" << endl;
    cout << "Double tem " << sizeof(double) << " bytes" << endl;
    cout << "Int tem " << sizeof(int) << " bytes" << endl;

    return 0;
}