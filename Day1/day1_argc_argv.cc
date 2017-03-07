#include<iostream>
using namespace std;

int main(int argc, char const *argv[]) {
	for (int i = 1; i < argc; i++) {
		std::cout << "argv " << i << ": " << argv[i] << endl;
	}
	return 0;
}
