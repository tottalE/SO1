/*
	This is playground
	It’s time for some “doing”:
▪ Write a function max3() that returns the maximum of three int values.
▪ Do not declare a variable or use an if-statement within the function body.
▪ Given: Function max() to determine the maximum of two int values
Hints:
▪ Call max() within function max3().
▪ Do not forget to add the prototypes on top of main().
*/

#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>

/*
void cleanSpaces(void);

int main(void)
{
	cleanSpaces();
}

void cleanSpaces(void)
{
	char input, lastInput = '\n';

	printf("Please enter a sentence: ");
	
	do {
		input = getchar(); // scanf("%c", input);
		if ((input == ' ') && (lastInput == ' '))
			;
		putchar(input); // printf("%c", input);
		lastInput = input;
	} while (input != '\n');
}
*/

/*
int max();
int main(void)
{
	printf("max(%d, %d, %d) = %d\n", 4, 2, 5, max(4, 2, 5));
	getchar();
	return 0;
}
int max(int a, int b)
{
	return (a > b) ? a : b;
}
*/

int binomial(int n, int k);

int main(void)
{
	int n, k;
	printf("Please enter n: ");
	scanf("%d", &n);
	getchar();

	printf("Please enter k: ");
	scanf("%d", &k);
	getchar();
	
	for (int row = 0; row <= n; row++)
	{
		printf("%3d ", binomial(row, k));
		putchar('\n');
	}

	return 0;
}

int binomial(int n, int k)
{
	if ((k == 0) || (n <= 1) || (k == n))
		return 1;
	else
		return binomial(n - 1, k - 1) + binomial(n - 1, k);
}