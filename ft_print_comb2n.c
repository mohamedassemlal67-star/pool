#include <unistd.h>

/**
 * Writes a single character to standard output.
 */
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/**
 * Prints the current combination stored in `comb`.
 * Adds a comma and space unless it's the last combination.
 */
void	print_combination(int comb[], int n)
{
	for (int i = 0; i < n; i++)
		ft_putchar(comb[i] + '0');

	// Check if it's the last combination
	if (comb[0] != 10 - n)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

/**
 * Recursive function to generate combinations.
 * pos: current position in the combination array.
 * start: starting digit for this position.
 */
void	generate_combinations(int comb[], int n, int pos, int start)
{
	if (pos == n)
	{
		print_combination(comb, n);
		return;
	}

	for (int digit = start; digit <= 9; digit++)
	{
		comb[pos] = digit;
		generate_combinations(comb, n, pos + 1, digit + 1);
	}
}

/**
 * Main function to print all combinations of n digits.
 * n must be between 1 and 9.
 */
void	ft_print_combn(int n)
{
	if (n < 1 || n > 9)
		return;

	int comb[9];
	generate_combinations(comb, n, 0, 0);
}

/**
 * Example usage.
 */
int	main(void)
{
	ft_print_combn(4); // Example: prints "01, 02, 03, ..., 89"
	ft_putchar('\n');
	return (0);
}
