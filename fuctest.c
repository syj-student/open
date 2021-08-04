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
void			iswhitespace(char **str)
{
	if (!str || !(**str))
		return ;
	while (**str == 32 || (9 <= **str && **str <= 13))
		*str++;
}

int	main(int argc, char **argv)
{
	char str[23] = "Hello World I am yusong";
	int i = 0;

	while(i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
}