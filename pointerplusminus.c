#include <stdio.h>

int main(void)
{
	int num[] = { 1,2,3 };
	int* p1 = &num[0];
	int* p2 = &num[1];
	printf("p1 : %d \n", p1);
	printf("p2 : %d \n", p2);
	printf("p2-p1 : %d \n", p2 - p1);
	printf("\n");

	char str[] = "yujung";
	char* p3 = &str[1];
	char* p4 = &str[5];
	printf("p3 : %d \n", p3);
	printf("p4 : %d \n", p4);
	printf("p4-p3 : %d \n", p4 - p3);

}