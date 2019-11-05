//
// Created by PhantomCracker on 11/5/2019.
//

bool isCryptSolution(std::vector<std::string> crypt, std::vector<std::vector<char>> solution) {
    long long int nr1, nr2, nr3;
    std::string word1 = crypt[0];
    std::string word2 = crypt[1];
    std::string word3 = crypt[2];
    for(int rows = 0; rows < solution.size(); rows++) {
        if((word1.length() > 1 && word1[0] == solution[rows][0] && solution[rows][1] == '0') || (word2.length() > 1 && word2[0] == solution[rows][0] && solution[rows][1] == '0') || (word3.length() > 1 && word3[0] == solution[rows][0] && solution[rows][1] == '0')) {
            return false;
        }
    }
    nr1 = createNumber(word1, solution);
    nr2 = createNumber(word2, solution);
    nr3 = createNumber(word3, solution);
    return (nr1 + nr2 == nr3);
}

long long int createNumber(std::string word, std::vector<std::vector<char>> solution) {
    std::string nrAsString;
    long long int nrAsInt;
    for(int i = 0; i < word.length(); i++) {
        for(int rows = 0; rows < solution.size(); rows++) {
            if(word[i] == solution[rows][0]) {
                nrAsString += solution[rows][1];
            }
        }
    }
    nrAsInt = std::stol(nrAsString);
    return nrAsInt;
}
