#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int	main(int argc, char **argv)
{
	char *str = "Hello World I am yusong\n";
	char **tmp;

	tmp = ft_split(str, ' ');
	while (*tmp)
	{
		printf("%s\n", *tmp);
		(*tmp)++;
	}
}