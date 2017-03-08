#include <iostream>
using namespace std;


inline int getCnt();
void fillArray(int *, int);
void showOutput(int *, int);
void bubbleSort(int *, int);

int main(int argc, char const *argv[]) {
    int cnt = getCnt();
    int Arr[cnt];
    fillArray(Arr, cnt);
    bubbleSort(Arr, cnt);
    showOutput(Arr, cnt);
    return 0;
}

inline int getCnt(){
    int val;
    std::cout << "Please enter size of Array to sort...";
    std::cin >> val;
    return int(val);
}

void fillArray(int *Arr_l, int cnt_l){
    for (int i = 0; i < cnt_l; i++) {
        std::cout << "Please enter " << i <<"th value: ";
        std::cin >> Arr_l[i];
    }
    return;
}

void bubbleSort(int *Arr_l, int cnt_l){
    int temp = 0;
    bool swapping = false;
    do {
        swapping = false;
        for (int i = 0; i < cnt_l-1; i++) {
            if (Arr_l[i+1] < Arr_l[i]){
                temp = Arr_l[i];
                Arr_l[i] = Arr_l[i+1];
                Arr_l[i+1] = temp;
                swapping = true;
            }
        }
    } while(swapping);

    return;
}


void showOutput(int *Arr_l, int cnt_l){
    int i = 0;
    while (i < cnt_l) {
        std::cout << "Sorted value: " << Arr_l[i] <<'\n';
        i++;
     }
}
