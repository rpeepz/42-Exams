#include <stdlib.h>

int	gold_gain(int **mine, int n)
{
	int	best_start[n];
	int start_i = 0;
	int	gold = 0;
	
	for (int y = 0; y < n; y++) {
		best_start[y] = -1;
		if (gold < mine[y][0]) {
			gold = mine[y][0];
			best_start[start_i] = y;
			start_i++;
		}
	}
	if (n == 1)
		return (gold);
	int big_gains = 0;
	int tmp[3];
	int j;
	while (start_i > 0) {
		start_i--;
		gold = mine[best_start[start_i]][0];
		j = 1;
		while (j < n) {
			tmp[0] = 0;
			tmp[1] = 0;
			tmp[2] = 0;
			if (best_start[start_i] - 1 >= 0)
			{
					tmp[0] = mine[best_start[start_i] - 1][j];
			}
			if (best_start[start_i] >= 0)
			{
					tmp[1] = mine[best_start[start_i]][j];
			}
			if (best_start[start_i] + 1 < n)
			{
					tmp[2] = mine[best_start[start_i] + 1][j];
			}
			j++;
			if (tmp[0] > tmp[1] && tmp[0] > tmp[2]) {
				best_start[start_i]--;
				gold += tmp[0];
			}
			else if (tmp[2] > tmp[0] && tmp[2] > tmp[1]) {
				best_start[start_i]++;
				gold += tmp[2];
			}
			else
				gold += tmp[1];
		}
		if (big_gains < gold)
			big_gains = gold;
	}
	return (big_gains);
}

