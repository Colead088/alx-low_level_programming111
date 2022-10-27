#ifndef MAIN_H                                                                                                                                           
#define MAIN_H                                                                                                                                           
                                                                                                                                                         
#include <stdio.h>                                                                                                                                       
                                                                                                                                                         
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
void positive_or_negative(int i);
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
void _putchar(char c);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_endianness(void);
int largest_number(int, int, int);
int _putchar(char c);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *);
char *cap_string(char *);
char *leet(char *);
char *rot13(char *);
void print_number(int n);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
void print_buffer(char *b, int size);
void swap_int(int *a, int *b);
int _strlen(char *s);
void _puts(char *str);
int _putchar(char c);
void reset_to_98(int *n);
void swap_int(int *a, int *b);
void rev_string(char *s);
void puts2(char *str);
void print_remaining_days(int month, int day, int year);
#endif /* MAIN_H */
