//
// Created by PhantomCracker on 10/22/2019.
//
#include <iostream>
#include <vector>
#include <algorithm>

int firstDuplicate(std::vector<int> a) {
    std::vector<int> occurencies(a.size() + 1, 0);
    std::vector<int> indexes(a.size() + 1, 0);
    for(int i = 0; i < a.size(); i++) {
        occurencies[a[i]]++;
        if(occurencies[a[i]] > 1) {
            indexes[i]++;
        }
        if(indexes[i] > 0) {
            return a[i];
        }
    }
    return -1;
}

int main() {
    std::vector<int> a{10, 6, 8, 4, 9, 1, 7, 2, 5, 3};

    std::cout << firstDuplicate(a);
    std::cout << std::endl;
    return 0;
}