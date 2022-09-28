#ifndef MAIN_H                                                                                                                                           
#define MAIN_H                                                                                                                                           
                                                                                                                                                         
#include <stdio.h>                                                                                                                                       
                                                                                                                                                         
void positive_or_negative(int i);                                                                                                                        
int largest_number(int, int, int);                                                                                                                       
void reset_to_98(int *n);                                                                                                                                
int _putchar(char c);
void _puts_recursion(char *s);
void _print_rev_recursion(char *s);
int _strlen_recursion(char *s);
int factorial(int n);
int _pow_recursion(int x, int y);
int _sqrt_recursion(int n);
int is_prime_number(int n);
int is_palindrome(char *s);
int wildcmp(char *s1, char *s2);
char *_strcat(char *dest, char *src);                                                                                                                    
char *_strncat(char *dest, char *src, int n);                                                                                                            
char *_strncpy(char *dest, char *src, int n);                                                                                                            
int _strcmp(char *s1, char *s2);                                                                                                                         
void reverse_array(int *a, int n);                                                                                                                       
char *string_toupper(char *);                                                                                                                            
char *cap_string(char *);
int _atoi(char *s);                                                                                                                                      
int convert_day(int month, int day);                                                                                                                     
void print_remaining_days(int month, int day, int year);                                                                                                 
#endif /* MAIN_H */
