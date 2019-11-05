//
// Created by PhantomCracker on 10/23/2019.
//

#include <iostream>
#include <algorithm>
#include <vector>

std::vector<std::vector<int> > rotateImage(std::vector<std::vector<int>> a) {
    for(int i = 0; i < a.size() / 2; i++) {
        for(int j = i; j < a.size() - i - 1; j++) {
            int aux = a[i][j];
            a[i][j] = a[a.size()-1-j][i];
            a[a.size()-1-j][i] = a[a.size()-1-i][a.size()-1-j];
            a[a.size()-1-i][a.size()-1-j] = a[j][a.size()-1-i];
            a[j][a.size()-1-i] = aux;
        }
    }
    return a;
}

int main() {
    std::vector<std::vector<int> > a{
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}
    };
    std::cout << rotateImage(a) << std::endl;
    std::cout << std::endl;
    return 0;
}