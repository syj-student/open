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

void mergeSort(int data[], int *ret, int p, int r);
void merge(int data[], int *ret, int p, int q, int r);
int main() {
	 int ret[8];
     int data[8] = {5,2,4,7,1,3,2,6} , i;
     printf("정렬 전\n");    
     for(i = 0; i < 8; i++) {
         printf("%d ", data[i]);
     }
     mergeSort(data, ret,  0, 7);
     printf("\n정렬 후\n");
     for(i = 0; i < 8; i++) {
         printf("%d ", ret[i]);
     }
	 printf("\n");
  return 0;
}
void mergeSort(int data[], int *ret, int p, int r) {
    int q;
    if(p<r) {
        q = (p+r)/2;
        mergeSort(data, ret, p , q);
        mergeSort(data, ret, q+1, r);
        merge(data, ret, p, q, r);
    }
}
void merge(int data[], int *tmp, int p, int q, int r) {
    int i = p, j = q+1, k = p;
    while(i<=q && j<=r) {
        if(data[i] <= data[j]) tmp[k++] = data[i++];
        else tmp[k++] = data[j++];
    }
    while(i<=q) tmp[k++] = data[i++];
    while(j<=r) tmp[k++] = data[j++];
    for(int a = p; a<=r; a++) data[a] = tmp[a];
}
