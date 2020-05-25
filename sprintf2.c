#include <stdio.h>

int main()
{
	char str[100];
	char ex1[100] = "My name is";
	char ex2[100] = "YuJung";

	sprintf(str, "%s", ex1); // 문자열 저장
	printf("%s\n", str); // 출력
	sprintf(str, "%s", ex2); 
	printf("%s\n", str);
	
	/*똑같은 str에 저장했는데 이어서 출력되지 않는 이유는
	배열로부터 ex1이 어디까지 저장됐는지 위치 포인터가 없기
	때문이다. 따라서 배열 처음부터 다시 입력돼서 이어서
	출력되지 않는다.*/

	return 0;
}