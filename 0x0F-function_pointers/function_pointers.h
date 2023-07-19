#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

/* Function to print a single character */
int _putchar(char c);

/* Function to print a name using the provided printing function */
void print_name(char *name, void (*f)(char *));

/* Function to execute a function on each element of an integer array */
void array_iterator(int *array, size_t size, void (*action)(int));

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
char *op;
int (*f)(int a, int b);
} op_t;

/* Function to perform addition */
int op_add(int a, int b);

/* Function to perform subtraction */
int op_sub(int a, int b);

/* Function to perform multiplication */
int op_mul(int a, int b);

/* Function to perform division */
int op_div(int a, int b);

/* Function to perform modulo */
int op_mod(int a, int b);

/* Function to select the correct function based on the operator */
int (*get_op_func(char *s))(int, int);

/* Function to search for an integer in an array */
int int_index(int *array, int size, int (*cmp)(int));

#endif /* FUNCTION_POINTERS_H */
