#include <iostream>

class GlobalClass{
private:
    int value;
    static GlobalClass* s_instance;
    GlobalClass(void){this->value = 0;}
public:
    int getValue(void){return this->value;}

    void setValue(int value){this->value = value;}

    static GlobalClass* getInstance(void){
        if(!s_instance){s_instance = new GlobalClass;}
    return s_instance;
    }
};
// definition needed for any static member variable
GlobalClass* GlobalClass::s_instance = 0;

int main(int argc, char const *argv[]) {
    std::cout << "value stored is: " << GlobalClass::getInstance()->getValue() << '\n';
    GlobalClass::getInstance()->setValue(1);
    std::cout << "value stored is: " << GlobalClass::getInstance()->getValue() << '\n';
    return 0;
}
