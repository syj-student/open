#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
    #define typename(x) _Generic((x),                                                 \
            _Bool: "_Bool",                  unsigned char: "unsigned char",          \
             char: "char",                     signed char: "signed char",            \
        short int: "short int",         unsigned short int: "unsigned short int",     \
              int: "int",                     unsigned int: "unsigned int",           \
         long int: "long int",           unsigned long int: "unsigned long int",      \
    long long int: "long long int", unsigned long long int: "unsigned long long int", \
            float: "float",                         double: "double",                 \
      long double: "long double",                   char *: "pointer to char",        \
           void *: "pointer to void",                int *: "pointer to int",         \
          default: "other")

#define whitespace(c) (c == 32 || (9 <= c && c <= 13))

size_t	f_atoi(char *str)
{
	size_t sign;
	size_t ret;

	sign = 1;
	ret = 0;
	if (!(str) || !(*str))
		return (0);
	while (whitespace(*str) || *str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while ('0' <= *str && *str <= '9')
	{
		ret = ret * 10 + (*str - '0');
		str++;
	}
	return (sign * ret);
}

int	main(int argc, char **argv)
{
	char *str = "  - - - --- -- - - -	 - - 123879";
	int i = f_atoi(str);
	printf("%d\n", i);
}