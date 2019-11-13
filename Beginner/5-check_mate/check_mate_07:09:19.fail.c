# include <unistd.h>
# include <stdlib.h>

int		kill_p(char **board, int size, int x, int y){
	if (y - 1 < 0 || x - 1 < 0 || x + 1 >= size)
		return (0);
	if (board[y - 1][x - 1] == 'K' || board[y - 1][x + 1] == 'K')
		return (1);
	return (0);
}
int		kill_b(char **board, int size, int x, int y){
	int tmpy = y;
	int tmpx = x;
	while (y + 1 < size && x + 1 < size){
		if (board[y + 1][x + 1] == 'K')
			return (1);
		x++;
		y++;
	}
	y = tmpy;
	x = tmpx;
	while (y + 1 < size && x - 1 >= 0){
		if (board[y + 1][x - 1] == 'K')
			return (1);
		y++;
		x--;
	}
	y = tmpy;
	x = tmpx;
	while (y - 1 >= 0 && x + 1 < size){
		if (board[y - 1][x + 1] == 'K')
			return (1);
		y--;
		x++;
	}
	y = tmpy;
	x = tmpx;
	while (y - 1 >= 0 && x - 1 >= 0){
		if (board[y - 1][x - 1] == 'K')
			return (1);
		y--;
		x--;
	}
	return (0);
}

int		kill_r(int x, int y, int kx, int ky){
	if (kx == x || ky == y)
		return (1);
	return (0);
}

int		kill_q(char **board, int size, int x, int y, int kx, int ky){
	if (kill_r(x, y, kx, ky))
		return (1);
	return (kill_b(board, size, x, y));
}

void	find_enemy(char **board, int size, int kx, int ky, int x, int y){
	while (y < size){
		x = 0;
		while (x < size){
			if (board[y][x] == 'P'){
				if (kill_p(board, size, x, y)){
					write(1, "Success\n", 8);
					return ;
				}
			}
			else if (board[y][x] == 'B'){
				if (kill_b(board, size, x, y)){
					write(1, "Success\n", 8);
					return ;
				}
			}
			else if (board[y][x] == 'R'){
				if (kill_r(x, y, kx, ky)){
					write(1, "Success\n", 8);
					return ;
				}
			}
			else if (board[y][x] == 'Q'){
				if (kill_q(board, size, x, y, kx, ky)){
					write(1, "Success\n", 8);
					return ;
				}
			}
			x++;
		}
		y++;
	}
	write(1, "Fail\n", 5);
}
void	find_k(char **board, int size, int *x, int *y){
	while (*y < size){
		*x = 0;
		while (*x < size){
			if (board[*y][*x] == 'K')
				return ;
			(*x)++;
		}
		(*y)++;
	}
}
void	solve(char **board, int size, int kx, int ky){
	find_k(board, size, &kx, &ky);
	find_enemy(board, size, kx, ky, 0, 0);
}
int		main(int ac, char **av){
	if (ac == 1){
		write(1, "\n", 1);
		return (0);
	}
	ac--;
	solve(&av[1], ac, 0, 0);
	return (0);
}
