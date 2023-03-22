#ifndef MAIN_H
#define MAIN_H

void *malloc_checked(unsigned int b);
#include <stdlib.h>
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
void _is_zero(char *argv[]);
int _checknum(char *argv[], int n);
char *_initialize_array(char *ar, int lar);
int main(int argc, char *argv[]);
#endif /* MAIN_H */
