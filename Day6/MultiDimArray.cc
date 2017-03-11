#include "MultiDimArray.h"

int main(int argc, char const *argv[]) {
    /* code */
    int *dim = getDim();
    float **array = getArray(dim);
    std::cout << "Original array..." << "\n\n";
    showArray(dim, array);
    float **new_array = getTranspose(dim, array);
    std::cout << "Transposed array..." << "\n\n";
    showArray(dim, new_array);
    cleanUp(dim, array);
    delete dim;
    return 0;
}

//................... Get Array Dimensions ....................//
int * getDim(){
    int *dim = new int[2];
    int cnt = 2;
    for (int i = 0; i < cnt; i++) {
        std::cout << "Please enter dim["<< i <<"] count... ";
        std::cin >> dim[i];
    }
    std::cout << "Your array dimensions are: " << dim[0] << " X " << dim[1] << '\n';
    return dim;
}

//................... Get Array Values ....................//
float ** getArray(int * dim){
    float ** array;
    array = new float *[dim[0]];
    for (int i = 0; i < dim[0]; i++) {
        array[i] = new float [dim[1]];
        for (int j = 0; j < dim[1]; j++) {
            std::cout << "Please enter element [" << i << "]"<< "[" << j <<"]: ";
            std::cin >> array[i][j];
        }
    }
    return array;
}

//................... Display Array ....................//
void showArray(int *dim, float **array){
    for (int i = 0; i < dim[0]; i++) {
        for (int j = 0; j < dim[1]; j++) {
            std::cout << std::left << std::setw(8) << array[i][j];
        }
        std::cout << "\n\n";
    }
    return;
}

//................... Transpose Array ....................//
float ** getTranspose(int *dim, float **array){
    float ** array_transp;
    array_transp = new float *[dim[1]];
    for (int i = 0; i < dim[1]; i++) {
        array_transp[i] = new float [dim[0]];
        for (int j = 0; j < dim[0]; j++) {
            array_transp[i][j] = array[j][i];
        }
    }
    cleanUp(dim, array);
    dimSwap(dim);
    return array_transp;
}

//................... Helper: Swap Dimension Values  ....................//
inline void dimSwap(int * dim){
    int temp = dim[1];
    dim[1] = dim[0];
    dim[0] = temp;
    return;
}

//................... Clean Freestore Memory ....................//
void cleanUp(int * dim, float **array) {
    for (int i = 0; i < dim[0]; i++) {
        delete[] array[i];
    }
    delete array;
}
