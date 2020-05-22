#include <stdio.h>

struct A {
	char one;
	char two;
	char there;
	char four;
	int five;
}a;

struct B {
	char one;
	char two;
	int three;
}b;

int main()
{
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(b));

}