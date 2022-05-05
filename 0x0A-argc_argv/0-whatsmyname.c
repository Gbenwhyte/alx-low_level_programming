#include <stdio.h>
#include <stdlib.h>

/**
  * main- Write a program that prints its name, followed by a new line.
  * @argc: count the number of parameters that go into main
  * @argv: pointer of array of pointers containing strings entering main
  * return- 0.
  */

int main(int argc, char **argv)
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
