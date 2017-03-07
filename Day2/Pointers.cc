#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    int i[3] = {1, 2, 3};
    int *ptr;
    std::cout << "Size of Array in Bytes: " << sizeof(i) << '\n';
    ptr = i;
    std::cout << "Array Address: " << ptr << '\n';
    std::cout << "Next Address: " << ptr + 1 << '\n';
    std::cout << "Next Next Address: " << ptr + 2 << '\n';
    std::cout << "Value Stored at Last Index: " << *(ptr + 2) << '\n';
    std::cout << "Value Stored at Next Index: " << *(ptr + 3) << '\n';
    return 0;

}
