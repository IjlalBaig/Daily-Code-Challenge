#include <iostream>
using namespace std;


void passByRef(int &, char &);
void dafaultParam(int arg1 = 1, char arg2 = 'a');

int main(int argc, char const *argv[]) {
    int varInt = 24;
    char varChar = 'a';
    passByRef(varInt, varChar);
    std::cout << "new varInt: "<< varInt << '\n';
    std::cout << "new charInt: "<< varChar << '\n';

    dafaultParam();
    return 0;
}

void passByRef(int &arg1, char &arg2) {
    std::cout << "You Passed int: " << arg1 <<'\n';
    std::cout << "We Send You int: " << ++arg1 <<'\n';
    std::cout << "You Passed char: " << arg2 <<'\n';
    std::cout << "We Send You char: " << (char)++arg2 <<'\n';
}

void dafaultParam(int arg1, char arg2) {
    std::cout << "no values set so arg1 is: " << arg1 << '\n';
    std::cout << "no values set so arg2 is: " << arg2 << '\n';
}
