#include <stdio.h>
#include <stdlib.h>
/**
  * main- Write a program that prints the number of arguments passed into it.
  * @argc: Count the number of parameters that go into main.
  * @argv: Pointer of array of pointers ontaining strings entering main.
  * Return: 0;
  */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc);
	return (0);
}
