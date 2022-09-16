//
// Created by PhantomCracker on 15.09.2022.
//

#include <iostream>
#include <vector>

int shapeArea(int n) {
    return 2 * n * (n - 1) + 1;
}

int main() {
    std::cout << shapeArea(n) << std::endl;
    std::cout << std::endl;
    return 0;
}