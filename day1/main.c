#include <stdio.h>

int main()
{
	printf("Open file...\n");

	FILE* file;

	file = fopen("input.txt", "r");

	if (file == NULL)
	{
		printf("fopen() error");
		return 1;
	}


	int c;

	int total = 0;

	char digits[2];

	while ((c = fgetc(file)) != EOF)
	{

		printf("%c", c);
		
		if (isdigit(c))
		{

		}

		if ((char) c == '\n')
		{
			//printf("\n");
		}
		//printf("test");
		//putchar(c);
	}

	printf("\n");

	if (ferror(file))
	{
		printf("I/O error when reading");
		return 1;
	}
	else if (feof(file))
	{
		printf("End of file reached.");
	}

	fclose(file);

	return 0;
}