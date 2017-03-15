#include <iostream>


//................... Stack (Super-class) ....................//
class Stack{
private:
    int SP;
    int stacksize;
    int *stackstore;
public:
    Stack(void);
    Stack(int);
    ~Stack();
    void push(int);
    int pop(void);
    int peak(void);
    int getSP(void);
};


//................... AddingStack (Sub-class) ....................//
class AddingStack : public Stack{
private:
    int sum;
public:
    AddingStack(void);
    AddingStack(int);
    int getSum(void);
    void push(int);
    int pop(void);
    int peak(void);
};
