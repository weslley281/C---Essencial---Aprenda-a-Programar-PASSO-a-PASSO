#include <iostream>
#include <cstdio>

int main(){
    int quant = 6;
    double value = 15.99;
    float pi = 3.14;

    value += pi;

    std::cout << value << std::endl;
    printf("O valor é igual %.2f\n", value);
    printf("A quantidade é igual %d\n", quant);

    return 0;
}