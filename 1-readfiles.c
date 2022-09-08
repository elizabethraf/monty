#include "monty.h"

/**
* read_file - check files
* @filen:filename to read from
* Return: NULL
**/
void read_file(const char* filename)
{
	int file_from, reading;
	char *letters;
	int len = 1024;
	int lines;

	file_from = open(filename, O_RDONLY);

	if (file_from == -1)
	{
		close(file_from);
		dprinf(2,"Error: Can't open file %s\n", filename);
		exit (98);
	}

	letters = malloc(sizeof(char) * len + 1);
	if (letters == NULL)
		exit (98);

	reading = read(file_from, letters, len);
	if (reading == -1)
	{
		free(letters);
		close(file_from);
		dprinf(2,"Error: Can't read from file %s\n", filename);
		exit (99);
	}

	lines = 1;
	while (reading != eof)
	{
		dlistint_t *head;
		dlistint_t *new;
		dlistint_t hello = {8, NULL, NULL};
		size_t n;

		head = &hello;
		new = malloc(sizeof(dlistint_t));
		if (new == NULL)
		{
			dprintf(2, "Error: Can't malloc\n");
			return (EXIT_FAILURE);
		}
		new->n = 9;
		head->prev = new;
		new->next = head;
		new->prev = NULL;
		head = new;

		get_opfnc(line) (head, linumber);
		lines++;
	}
}

