#include "stack.h"
#include <iostream>


//................... Stack (Super-class) ....................//

Stack::Stack(void){
    SP = 0;
    stacksize = 100;
    stackstore = new int[stacksize];
}

Stack::Stack(int size){
    SP = 0;
    stacksize = size;
    stackstore = new int[stacksize];
}

Stack::~Stack(){
    delete[] stackstore;
    std::cout << "stackstore cleared" << '\n';
}

void Stack::push(int value){
    stackstore[SP] = value;
    SP++;
}

int Stack::pop(void){
    return stackstore[--SP];
}

int Stack::peak(void){
    return stackstore[SP - 1];

}
int Stack::getSP(void){
    return SP;
}


//................... AddingStack (Sub-class) ....................//

AddingStack::AddingStack(void) : Stack(){
    sum = 0;
}
AddingStack::AddingStack(int value) : Stack(value){
    sum = 0;
}

void AddingStack::push(int value){
    sum+= value;
    Stack::push(value);
}

int AddingStack::pop(){
    int value = Stack::pop();
    sum -= value;
    return sum;
}
int AddingStack::peak(void){
    return sum;
}
