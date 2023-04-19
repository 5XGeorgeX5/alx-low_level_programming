/**
 * print_name - prints a name
 * @name: The name
 * @f: the function
 *
 */

void print_name(char *name, void (*f)(char *))
{
f(name);
}
