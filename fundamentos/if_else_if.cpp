#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n1, n2, n3;

    cin >> n1;
    cin >> n2;
    cin >> n3;

    if(n1 >= 2 && n1 >= 3){
        cout << n1 << endl;
    }else {
        cout << "else 1 ..." << endl;
        if(n2 >= n1 && n2 >= n3){
            cout << n2 << endl;
        }else {
            cout << "else 2 ..." << endl;
        }
    }

    return 0;
}
