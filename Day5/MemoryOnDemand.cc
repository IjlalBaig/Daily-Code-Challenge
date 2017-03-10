#include <iostream>
using namespace std;

inline int getCnt();
float *setArray(int);
void showArray(float *, int);
void freeMemory(float *);

int main(int argc, char const *argv[]) {
    int cnt = getCnt();
    float *Array = setArray(cnt);
    showArray(Array, cnt);
    freeMemory(Array);
    return 0;
}

inline int getCnt(){
    int val;
    std::cout << "Please enter size of your Array...";
    std::cin >> val;
    return int(val);
}

float *setArray(int cnt_l){
    float *Array = new float[cnt_l];
    for (int i = 0; i < cnt_l; i++) {
        std::cout << "Please enter first float entry...";
        std::cin >> Array[i];
    }
    return Array;
}

void showArray(float *Array, int cnt_l) {
    std::cout << "Your array upside down is:" << '\n';
    for (int i = cnt_l-1; i >= 0; i--) {
        std::cout << "........." << Array[i] << '\n';
    }
}

void freeMemory(float *Array){
    delete[] Array;
    std::cout << "Memory freed" << '\n';
    return;
}
