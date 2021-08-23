#include <stdlib.h>
#include <stdio.h>
#include "sandpiles.h"
/**
 * sandpiles_sum - Sum of two sandpiles
 * @grid1: Left 3x3 grid
 * @grid2: Right 3x3 grid
 *
 */
void sandpiles_sum(int grid1[3][3], int grid2[3][3])
{
	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			grid1[i][j] = grid1[i][j] + grid2[i][j];
		}
	}

	while (stable(grid1))
	{
		operation_stable(grid1);
	}
}

/**
 * stable - Knows if the sandpile is stable
 * @grid1: The grid
 * Return: 0 on stable, 1 otherwise
 */
int stable(int grid1[3][3])
{
	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (grid1[i][j] > 3)
				return (1);
		}
	}
	return (0);
}

/**
 * operation_stable - Organize the grid
 * @grid1: The grid
 * Return:
 */
void operation_stable(int grid1[3][3])
{
	int i, j;
	int sand_grid1[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};

	printf("=\n");
	print_grid1(grid1);
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (grid1[i][j] > 3)
			{
				grid1[i][j] -= 4;
				if (i >= 0 && i < 2)
					sand_grid1[i + 1][j] += 1;
				if (i > 0 && i <= 2)
					sand_grid1[i - 1][j] += 1;
				if (j >= 0 && j < 2)
					sand_grid1[i][j + 1] += 1;
				if (j > 0 && j <= 2)
					sand_grid1[i][j - 1] += 1;
			}
		}
	}
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			grid1[i][j] += sand_grid1[i][j];
}

/**
 * print_grid1 - Prints the grid
 * @grid: The grid
 * Return:
 */
void print_grid1(int grid[3][3])
{
	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (j)
				printf(" ");
			printf("%d", grid[i][j]);
		}
		printf("\n");
	}
}
