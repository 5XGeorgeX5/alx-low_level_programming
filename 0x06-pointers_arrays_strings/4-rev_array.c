/**
 * reverse_array - reverses the content of an array of integers
 *
 * @a: the array
 * @n: the number of elements of the array
 *
 */

void reverse_array(int *a, int n)
{
int tmp;
int i;

n--;
for (i = 0; i < n / 2; i++)
{
tmp = a[i];
a[i] = a[n - i];
a[n - i] = tmp;
}
}
