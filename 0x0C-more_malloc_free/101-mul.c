#include "main.h"
/**
 * is_positive_number - a function that validate +ive number
 * @str: string
 *
 * Return: 0 on success else 1
 */
int is_positive_number(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * print_error_exit - a function that checkof error
 * Exit: 98
 */
void print_error_exit(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - entry
 * @argc: argument count
 * @argv: array of pointers to argument strings
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
		print_error_exit();
	if (!is_positive_number(argv[1]) || !is_positive_number(argv[2]))
		print_error_exit();
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);
	int result = num1 * num2;

	printf("%d\n", result);
	return (0);
}
