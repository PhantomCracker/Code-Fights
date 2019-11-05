//
// Created by PhantomCracker on 10/28/2019.
//
#include <iostream>
#include <vector>
#include <algorithm>

bool notInRow(std::vector<std::vector<char> > grid, int row) {
    std::vector <int> occurencies(10, 0);
    for(int j = 0; j < grid.size(); j++) {
        if(grid[row][j] != '.') {
            grid[row][j] = grid[row][j] - '0';
            occurencies[grid[row][j]]++;
        }
    }
    for(int i = 0; i < 10; i++) {
        if(occurencies[i] > 1) {
            return false;
        }
    }
    return true;
}

bool notInColumn(std::vector<std::vector<char> > grid, int column) {
    std::vector <int> occurencies(10, 0);
    for(int i = 0; i < grid.size(); i++) {
        if(grid[i][column] != '.') {
            grid[i][column] = grid[i][column] - '0';
            occurencies[grid[i][column]]++;
        }
    }
    for(int i = 0; i < 10; i++) {
        if(occurencies[i] > 1) {
            return false;
        }
    }
    return true;
}

bool noSquareRepetitions(std::vector<std::vector<char> > grid) {
    std::vector<int> occurencies(10, 0)
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            occurencies[grid[i][j]] ++;
        }
    }
    for(int i = 0; i < 10; i++) {
        if(occurencies[i] > 1) {
            return false;
        }
    }
    return true;
}

bool sudoku2(std::vector<std::vector<char>> grid) {
    bool column, row, squareRepetition;
    bool columnRow = true;
    for(int i = 0; i < grid.size(); i++) {
        row = notInRow(grid, i);
        column = notInColumn(grid, i);
        if(row == false || column == false) {
            columnRow = false;
        }
    }
    std::vector<std::vector<char> > square;
    int numberOfSquares = 0;
    for(int i = 0; i < grid.size(); i++) {
        for(int j = 0; j < grid.size(); j++) {
            if(i )
            if(numberOfSquares === 3) {
                square[i][j] = grid[i][j];
                squareRepetition = noSquareRepetitions(grid[i][j]);
            }
        }
    }
    return columnRow && squareRepetition;
}

int main() {
    std::vector<std::vector<char> > grid;
    std::cout << std::endl;
    return 0;
}
