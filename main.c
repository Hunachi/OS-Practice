#include<stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdarg.h>
#include <stdbool.h>
#include <string.h>

int main() {
    int *a, *b;
    a = calloc(1, sizeof(int));
    b = calloc(1, sizeof(int));
    *a = 1;
    *b = 2;
    printf("a = %d, b = %d\n", *a, *b);
}