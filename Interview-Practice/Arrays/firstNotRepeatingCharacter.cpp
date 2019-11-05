//
// Created by PhantomCracker on 10/23/2019.
//

#include <iostream>
#include <algorithm>
#include <string>
#include <climits>

char firstNotRepeatingCharacter(std::string s) {
    std::pair<int, int> repeatingCharacters[256];
    for(int i = 0; s[i]; i++) {
        (repeatingCharacters[s[i]].first)++;
        repeatingCharacters[s[i]].second = i;
    }
    int repeating = INT_MAX;
    for(int i = 0; i < 256; i++) {
        if(repeatingCharacters[i].first == 1) {
            repeating = std::min(repeating, repeatingCharacters[i].second);
        }
    }
    if(repeating < INT_MAX) {
        return s[repeating];
    } else {
        return '_';
    }
}


int main() {
    std::string s = "abacabad";
    std::cout << firstNotRepeatingCharacter(s) << std::endl;
    std::cout << std::endl;
    return 0;
}