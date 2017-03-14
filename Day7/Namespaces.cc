#include <iostream>
#include <string>
namespace ML{
    std::string name = "Machine Learning";
    float weight[5] = {1.0, 2.0, 3.0, 4.0, 5.0};
};

namespace CV{
    std::string name = "Computer Vision";
    int weight = 24;
};
int main(int argc, char const *argv[]) {
    std::cout << "ML namespace: " << ML::name << '\n';
    std::cout << "ML namespace: " << ML::weight[1] << '\n';

    std::cout << "CV namespace: " << CV::name << '\n';
    std::cout << "CV namespace: " << CV::weight << '\n';

    return 0;
}
