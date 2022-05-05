#include <stdio.h>
#include <stdlib.h>

/**
 *   main - Print the name of the program
 *   @argc: Count arguments
 *   @argv: Arguments
 *   Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	int mul, ex;

	if(argc == 2)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	else (argc != 3)
	{
		 printf("%s\n", "Error");
		 ex = 1;
	}							         
	return (0);
}
