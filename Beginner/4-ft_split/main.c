#include <stdio.h>
#include <stdlib.h>
char **ft_split(char *s);
int main(void)
{
	char *s = "hello my name is robbie.		this is a test		.  			";
	char **strs = ft_split(s);
	while (*strs){
		printf("%s ", *strs++);
	}
	while (*strs)
	{
		free(*strs);
		strs++;
	}
	printf("\n");
//	s = "hello this is a normal test";
//	s = "    leading spaces";
//	s = "trailing spaces   ";
//	s = "middle      spaces";
//	s = "oneword";
	s = "";
	if ((strs = ft_split(s)))
		while (*strs)
			printf("%s ", *strs++);
	printf("\n");
	return (0);
}
