#include <stdio.h>

int main()
{
	char(*arr)[3];
	char arr1[3] = { 'c','y','j' };
	char arr2[3] = { 'h','i','\n' };

	//�ε��� ������ 3�� �迭 �����͸� �����ߴµ� 5������ ����Ű�� �Ұ�.
	char arr3[5] = { 'h','e','l','l','o' };

	arr = &arr1; // �迭 �ε��� 3���� �迭 �����Ͱ� arr1�� �ּҸ� ����Ų��.
	printf("arr1 ���ڿ� : ");
	for (int i = 0; i < (int)sizeof(*arr); i++)
		printf("%c", (*arr)[i]); // ���� �ϳ��ϱ� %c
	printf("\n");

	arr = &arr2;
	printf("arr2 ���ڿ� : ");
	for (int i = 0; i < (int)sizeof(*arr); i++)
		printf("%c", (*arr)[i]);

	arr = &arr3;
	printf("arr3 ���ڿ� : ");
	for (int i = 0; i < (int)sizeof(*arr); i++)
		printf("%c", (*arr)[i]);
	printf("\n");
}