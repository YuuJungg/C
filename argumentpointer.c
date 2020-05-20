#include <stdio.h>
#include <stdarg.h>

void print(int args, ...)
{
	va_list ap;

	va_start(ap, args);
	for (int i = 0; i < args; i++)
	{
		int num = va_arg(ap, int);
		printf("%d ", num);
	}
	va_end(ap);
	printf("\n");
}

int main_argumentpointer()
{
	print(1, 10);
	print(2, 10, 20);
	print(3, 10, 20, 30);
	print(4, 10, 20, 30, 40);

	return 0;
}