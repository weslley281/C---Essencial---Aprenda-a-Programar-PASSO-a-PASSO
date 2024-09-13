#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    double finalGrade;
    cout << "Escreva a nota final";
    cin >> finalGrade;

    if(finalGrade >= 7){
        cout << "Nota excelente" << endl;
    }else {
        cout << "Nota ruim" << endl;
    }
    
    return 0;
}
