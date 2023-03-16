#include <unistd.h>
#include <string.h>
/**
 * main - Entry point
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
const char *ms = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
const int len = strlen(ms);
write(STDERR_FILENO, ms, len);
return (1);
}
