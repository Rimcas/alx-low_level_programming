#ifndef MAIN_H
#define MAIN_H

/**
 * _isupper - determines uppercase or not
 * @c: character to determine
 * Return: true or false
 */
int _isupper(int c);
/**
 * _isdigit - checks if it is digit
 * @c: character to check
 *
 * Return: returns boolean
 */
int _isdigit(int c);
/**
 * mul - multiplies stuff
 * @a: integer to multiply
 * @b: integer to multiply
 * Return: gives result
 */
int mul(int a, int b);
/**
 * print_numbers - prints the numbers
 *
 */
void print_numbers(void);
/**
 * print_most_numbers - prints the numbers
 *
 */
void print_most_numbers(void);

/**
 * more_numbers - prints the numbers
 *
 */
void more_numbers(void);
  
void print_line(int n);

void print_diagonal(int n);
/**
 * print_square - prints a square
 *
 * @size: prints the size of whatever
 */
void print_square(int size);
/**
 * print_triangle - prints triangle
 * @size: size of triangle
 */
void print_triangle(int size);

#endif /*MAIN_H*/
