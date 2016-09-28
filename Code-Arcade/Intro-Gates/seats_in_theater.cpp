#include <iostream>
#include <cmath>

int seatsInTheater(int nCols, int nRows, int col, int row)
{
	int number_of_seats = 0;
	for(int i = row+1; i <= nRows; i++)
		for(int j = col; j <= nCols; j++)
			number_of_seats++;
    return number_of_seats;
}

int main()
{
	int nRow, nCol, row, col;
	std::cin >> nCol >> nRow >> col >> row;

	std::cout << seatsInTheater(nCol, nRow, col, row);

	std::cout << std::endl;
	return 0;
}