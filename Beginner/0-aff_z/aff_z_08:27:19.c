#include <unistd.h>
int main(int ac, char **av){
	if (ac < 2)
		return (write(1, "z\n", 2));
	while (*av){
		if (**av == 'z'){
			return (write(1, "z\n", 2));
		}
		(*av)++;
	}
	return (write(1, "z\n", 2));
}
