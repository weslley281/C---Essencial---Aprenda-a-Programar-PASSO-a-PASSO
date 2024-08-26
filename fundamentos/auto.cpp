#include <iostream>
#include <typeinfo>

using namespace std;


int main(int argc, char const *argv[])
{
    auto a = 1;
    auto b = 1.2;
    auto c = false;
    auto d = 'x';
    auto e = "Weslley";

    cout << typeid(a).name() << endl;
    cout << typeid(b).name() << endl;
    cout << typeid(c).name() << endl;
    cout << typeid(d).name() << endl;
    cout << typeid(e).name() << endl;

    return 0;
}
