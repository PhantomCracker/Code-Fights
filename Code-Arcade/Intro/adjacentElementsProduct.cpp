//
// Created by PhantomCracker on 15.09.2022.
//

#include <iostream>
#include <vector>

int adjacentElementsProduct(std::vector<int> inputArray) {
    int prod = -1000;
    for (int i = 0; i < inputArray.size() - 1; i++) {
        int newProd = inputArray[i] * inputArray[i+1];
        if (newProd > prod) {
            prod = newProd;
        }
    }
    return prod;
}

int main() {
    std::cout << adjacentElementsProduct(inputArray) << std::endl;
    std::cout << std::endl;
    return 0;
}