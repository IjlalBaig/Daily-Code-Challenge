#include "stack.h"
#include <iostream>

int main(int argc, char const *argv[]) {

    AddingStack *myStack = new AddingStack(10);
    std::cout << "SP points at: " << (*myStack).getSP() << "\n\n";
    myStack->push(1);
    myStack->push(2);
    myStack->push(3);
    myStack->push(4);
    myStack->push(5);
    std::cout << "SP points at: " << myStack->getSP() << '\n';
    std::cout << "Last Value In: " << myStack->peak() << "\n\n";
    myStack->pop();
    myStack->pop();
    std::cout << "SP points at: " << myStack->getSP() << '\n';
    std::cout << "Last Value In: " << myStack->peak() << "\n\n";
    delete myStack;
}
