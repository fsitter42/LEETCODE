#include "leetcode.h"

bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target)
{
    int i = 0;
    int j = 0;

	if (matrixSize == 1 && *matrixColSize == 1)
	{
		if (target == matrix[0][0])
			return (true);
		else
			return (false);
	}

    while (i < matrixSize)
    {
        while (i < matrixSize && target > matrix[i][*matrixColSize-1])
			i++;
		
        if (i < matrixSize)
		{
			while (j < *matrixColSize)
        	{
            	if (matrix[i][j] == target)
                	return (true);
            	j++;
        	}
			return (false);
		}
    }
    return (false);
}

int main()
{
    int row0[] = {1,3};
    int row1[] = {10,11,16,20};
    int row2[] = {23,30,34,60};
    
    int *matrix[2] = {row0};


	int target = 3;
	int rows = 1;
	int cols = 2;

	if (searchMatrix(matrix, rows, &cols, target) == true)
		printf("true\n");
	else
		printf("false\n");
}