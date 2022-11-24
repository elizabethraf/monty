#include "monty.h"

/**
* main - print the num of args you passed to it
* @argc: argument count
* @argv: argument vector, array of strings
* Return: 0 if all is well, exits with numbers
**/
int main(int argc, char *argv[])
{
	if (argc != 2)
		return  (EXIT_FAILURE);

		if (argc < 2 || argc > 2 || argv[1] == NULL)
		{
			dprintf(2, "USAGE: %s file:\n", argv[0]);
			exit(1);
		}

	read_file(*filename);

	return (EXIT_SUCCESS);
}

