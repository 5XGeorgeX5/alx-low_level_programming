#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
char ms[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
int len = sizeof(ms) - 1;
write(STDERR_FILENO, ms, len);
return (1);
}
