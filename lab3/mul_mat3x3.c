#include <stdio.h>

int main( void )
{
	int A[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	int B[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
	int C[3][3];

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			int sum = 0;
			for (int k = 0; k < 3; k ++)
			{
				sum += A[i][k] * B[k][j];
			}
			C[i][j] = sum;
		}
	}

	// print vect C
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d ", C[i][j]);
		}
		printf("\n");
	}
	return (0);
}
