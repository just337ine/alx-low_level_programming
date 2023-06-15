#include "main.h"
/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: integer variable
 *
 * Return:if fail return '\0' else treat it as an empty string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size_1, i, e;
	char *a;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";
	l1 = 0;
	while (s1[size_1])
		size_1++;

	a = malloc(sizeof(*a) * size_1 + n + 1);

	if (a == NULL)
		return (NULL);

	for (i = 0, e = 0; i < (size_1 + n); i++)
	{
		if (i < l1)
		{
			a[i] = s1[i];
		}
		else
		{
			a[i] = s2[e++];
		}
	}
	a[i] = '\0';
	return (a);
}
