#include <iostream>
#include <cstdio>
using namespace std;

int main(int argc, char const *argv[])
{
    double finalGrade;
    cout << "Escreva a nota final: ";
    cin >> finalGrade;

    bool goodBehavior;
    cout << "Ele(a) foi bem? ";
    cin >> goodBehavior;

    bool goodStudent = finalGrade >= 9 && goodBehavior;
    bool averageStudent = finalGrade >= 9 != goodBehavior;

    cout << "Bom estudante? " << goodStudent << endl;
    cout << "Estudante Mediano? " << averageStudent << endl;
    
    return 0;
}
