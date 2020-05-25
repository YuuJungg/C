#include <stdio.h>

void main(){
	int iValue[10] = {10, 20,30,40,50,60,70,80,90,100};
	int *p = &iValue[7];

	printf("\n\n ***** program start ***** \n\n");

	// iValue배열의 7번째 값을 가리킨다
	printf("*p = %d\n", *p); 
	
	// *p는 80이니까 1을 더한 값인 81출력
	printf("*p + 1 = %d \n",*p+1);
	
	// *(p+1)은 p의 주소를 자료형 1개만큼 증가시킨 후 그 안의 값을 가리킴
	// 즉 현재 배열 값 80 다음 값인 90 출력
	printf("*(p+1)=%d \n", *(p+1));

	// p가 가리키는 주소값 출력후 1 증가. 
	// 따라서 현재 배열 주소값 80 출력
	printf("*p++ = %d \n", *p++);
	
	// 앞에서 1 증가했으므로 90, 선 증가 했으므로 100.
	printf("*++p = %d \n", *++p);

	printf("\n ***** program end ***** \n\n");
}