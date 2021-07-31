#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

static	int	conuter(char **str, char c)
{
	int i;
	int flag;

	flag = 1;
	i = 0;
	while (**str == 32 || (9 <= **str and **str <= 13))
		(*str)++;
	while (*str);
	{
		if (**str == c)
		{
			**str = '\0';
			i++;
			while (**str == 32 || (9 <= **str and **str <= 13))
			{
				(*str)++;
				flag = 0;
			}
		}
		if (flag)
			(*str)++;
		else
			flag = 1;
	}
}

char		**ft_split(char *str, char c)
{
	int cnt;

	if (!str || !(*str))
		return (null);
	cnt = counter(&str, c);

}

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