/**
 * rev_string - reverses a string
 *
 * @s: the string.
 *
 */

void rev_string(char *s)
{
int count;
int i;
int tmp;

count = 0;
while (*s)
{
s++;
count++;
}
s -= count;
count;
for (i = 0; i < count / 2; i++)
{
tmp = *(s + i);
*(s + i) = *(s + count - 1 - i);
*(s + count - 1 - i) = tmp;
}
}
