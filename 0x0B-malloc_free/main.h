#ifndef MAIN_H                                                                                                                                           
#define MAIN_H                                                                                                                                           
                                                                                                                                                         
#include <stdio.h>                                                                                                                                       
                                                                                                                                                         
void positive_or_negative(int i);                                                                                                                        
int largest_number(int, int, int);                                                                                                                       
void reset_to_98(int *n);                                                                                                                                
int _putchar(char c);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
char **strtow(char *str);
#endif /* MAIN_H */
