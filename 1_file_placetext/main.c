#include <stdio.h>
#include <stdlib.h>

/*
*
* Exercise 1: Create a file with the user's wanted filename and text.
*
*/

int main()
{
	char str[1000];
	FILE *fptr;
	char fname[20];

	printf("Input the wanted filename: ");
	fgets(fname, 20, stdin);
	printf(fname);
	printf("Selected.\n");
	printf("Enter your wanted contents: ");
	fgets(str, 1000, stdin);
	printf("\n Alright, saving...\n");

	fptr = fopen(fname, "w");

	if (fptr == NULL) {
		printf("ERROR: Error reading the file.");
		return 1;
	}

	fputs(str, fptr);
	fclose(fptr);

	printf("Done!");
	
	return 0;

}