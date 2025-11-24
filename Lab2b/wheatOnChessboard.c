/*
	* Author: Jinju Ok
	* Wheat on chessboard problem.
	* 2025.11.21
*/

#include <stdio.h>
#define SIZE 64

int main(void)
{
	unsigned long long product = 1; // number of grains
	double total = 0; // sum of grains

	printf("Field |  On field  | Sum\n");
	printf("------+------------+----------------\n");
	
	for (int i = 0; i < 67; i++)
	{
		if (i != 0)
			product = product * 2;

		total += product;
		printf("%5llu | %10llu | %.f (= %.1e)\n", i + 1, product, total, total);
	}

	return 0;
}