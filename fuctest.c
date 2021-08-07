#include <stdio.h>
#include <stdlib.h>
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

typedef	struct	s_deque
{
	int            onoff;
     struct s_deque *next;
}				t_deque;

void	fdeque_append(t_deque *head, int a)
{
     while (head->next)
          head = head->next;
     t_deque *newdata = (t_deque *)malloc(sizeof(t_deque));
     newdata->onoff = a;
     newdata->next = NULL;
     head->next = newdata;
     printf("%d %d\n", head->onoff, a);
}

int	main(int argc, char **argv)
{
     t_deque *head;

     head = (t_deque *)malloc(sizeof(t_deque));
     head->next = NULL;
     head->onoff = 1;
     fdeque_append(head, 10);
     fdeque_append(head, 20);
     printf("out %d\n", head->onoff);
}