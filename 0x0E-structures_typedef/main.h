#ifndef MAIN_H                                                                                                                                           
#define MAIN_H                                                                                                                                           
                                                                                                                                                         
#include <stdio.h>                                                                                                                                       
                                                                                                                                                         
void *malloc_checked(unsigned int b);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
void positive_or_negative(int i);                                                                                                                        
int largest_number(int, int, int);                                                                                                                       
void reset_to_98(int *n);                                                                                                                                
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
int _strlen(char *s);                                                                                                                                    
void _puts(char *str);                                                                                                                                   
void print_rev(char *s);                                                                                                                                 
void rev_string(char *s);                                                                                                                                
void puts2(char *str);                                                                                                                                   
void puts_half(char *str);                                                                                                                               
void print_array(int *a, int n);                                                                                                                         
char *_strcpy(char *dest, char *src);                                                                                                                    
int _atoi(char *s);                                                                                                                                      
int convert_day(int month, int day);                                                                                                                     
void print_remaining_days(int month, int day, int year);                                                                                                 
#endif /* MAIN_H */
