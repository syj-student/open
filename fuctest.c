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

typedef	struct	s_linklst
{
	int val;
	int next;
}				t_linklst;


int	main(int argc, char **argv)
{
    int *pi = (int *)malloc(sizeof(int)); //원하는 형식 포인터로 형변환
    printf("초기: %d \n",*pi);
    *pi= 20; //간접 연산으로 사용
    printf("간접 연산을 수행한 후: %d\n",*pi);
    free(pi); //더 이상 필요없을 때 해제
    return 0;
}