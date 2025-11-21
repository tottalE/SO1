/*
	Array
*/

#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>

int main(void)
{
	double maxTemperatures[12] = { 1,2,4 };
	int month;
	int a[] = { 1, 6, 3, 1, 5, 8, 2, 3 };
	int size = sizeof(a) / sizeof(int);
	int sum = 0;

	for (int i = 0; i < 9; i++)
		sum += a[i];

	printf("size: %d\n", size);
	printf("Sum: %d\n", sum);

	/*
	maxTemperatures[0] = 2.7;
	maxTemperatures[1] = 2.7;
	maxTemperatures[2] = 2.7;
	maxTemperatures[3] = 2.7;
	maxTemperatures[4] = 2.7;
	maxTemperatures[5] = 2.7;
	maxTemperatures[6] = 2.7;
	maxTemperatures[7] = 2.7;
	maxTemperatures[8] = 2.7;
	maxTemperatures[9] = 2.7;
	maxTemperatures[10] = 2.7;
	maxTemperatures[11] = 2.7;
	*/


	// Get user input
	printf("Enter months: ");
	scanf("%d", &month);
	while (getchar() != '\n')
		/*  NOP */;

	// Print the temp
	printf("The temperature = %.1f\n", maxTemperatures[month - 1]);

	getchar();
	return 0;
}
