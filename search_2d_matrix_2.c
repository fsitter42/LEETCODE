#include "leetcode.h"

bool searchMatrix2(int** matrix, int matrixSize, int* matrixColSize, int target)
{
	static int j = 0;
	int value = 0;
	if (matrixSize < 1 || j < 0  || j > *matrixColSize)
		return (false);
	if (matrix[matrixSize-1][j] == target)
		return (true);
	if (matrix[matrixSize-1][j] > target)
		return(searchMatrix2(matrix, matrixSize-1, matrixColSize, target));
	else
	{
		if (j < *matrixColSize)
		{
			j++;
			return(searchMatrix2(matrix, matrixSize, matrixColSize, target));
		}
		else
			return (false);
	}	
}

bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target)
{
    int row = 0, col = matrixColSize[0] - 1;
    while (row < matrixSize && col >= 0)
	{
        if (matrix[row][col] == target)
			return true;
        if (matrix[row][col] > target)
			col--;
        else {
            row++;
            if (row < matrixSize) col = matrixColSize[row] - 1;
        }
    }
    return false;
}

int main()
{
    int row0[] = {1,4,7,11,15};
    int row1[] = {2,5,8,12,19};
    int row2[] = {3,6,9,16,22};
	int row3[] = {10,13,14,17,24};    
	int row4[] = {18, 21, 23, 26, 30};

	int *matrix[5] = {row0, row1, row2, row3, row4};


	int target = 22;
	int rows = 5;
	int cols[] = {5, 5, 5, 5,5};

	if (searchMatrix(matrix, rows, cols, target) == true)
		printf("true\n");
	else
		printf("false\n");

	int i = 0;
	int j;

	while (i < rows)
	{
		j = 0;
		while (j < cols[0])
		{
			printf("%i ", matrix[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
}