#include <stdlib.h>
#include <stdio.h>

void bar(int a)
{
	if (a == 42)
	{
		// Crash
		*(int*)NULL = 0;
	}
}

void foo ()
{
	int a;

	printf("Input: ");
	scanf("%d", &a);

	bar(a);
}

int main (int argc, char **argv)
{
	if (argc > 1)
	{
		printf("Usage: %s\n", argv[0]);
		exit(EXIT_FAILURE);
	}

	foo();

	exit(EXIT_SUCCESS);
}

