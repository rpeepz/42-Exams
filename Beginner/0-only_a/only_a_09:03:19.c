#include <unistd.h>
int main(void){
	return (write(1, "a", 1));
}
