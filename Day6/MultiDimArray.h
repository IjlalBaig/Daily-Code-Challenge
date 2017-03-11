#include <iostream>
#include <iomanip>

int * getDim();
float ** getArray(int *);
inline void dimSwap(int *);
float ** getTranspose(int *, float **);
void showArray(int *, float **);
void cleanUp(int *, float **);
