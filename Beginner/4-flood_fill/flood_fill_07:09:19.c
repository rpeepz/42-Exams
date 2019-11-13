#include "flood_fill.h"

void	flood_fill_r(int x, int y, t_point size, char **tab, char c){
	if (x < 0 || x >= size.x || y < 0 || y >= size.y){
		return ;
	}
	if (tab[y][x] == c){
		tab[y][x] = 'F';
		flood_fill_r(x - 1, y, size, tab, c);
		flood_fill_r(x, y - 1, size, tab, c);
		flood_fill_r(x + 1, y, size, tab, c);
		flood_fill_r(x, y + 1,size, tab, c);
	}
}

void	flood_fill(char **tab, t_point size, t_point begin){
	if (begin.x < 0 || begin.x >= size.x || begin.y < 0 || begin.y >= size.y)
		return ;
	int x = begin.x;
	int y = begin.y;
	char c = tab[y][x];
	flood_fill_r(x, y, size, tab, c);
}
