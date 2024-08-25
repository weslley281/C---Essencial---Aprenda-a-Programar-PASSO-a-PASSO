#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    string title, name;
    title = "Senhor";
    name = "Weslley";
    string end(3, '!');

    cout << "A quantidade de letras contida na variavel 'name' é " << name.size() << endl;
    cout << "A ultima letra de 'name' é " << name[6] << endl;
    cout << title + " " + name + " " + end << endl;

    return 0;
}
