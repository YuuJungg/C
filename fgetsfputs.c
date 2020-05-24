#include <stdio.h>     

int main()
{
    char buffer[20];    // 파일을 읽을 때 사용할 임시 공간

	// my_info.txt 파일을 읽기 모드로 열기. 
	// 파일 포인터를 반환
    FILE *fp = fopen("my_info.txt", "r");  

	// my_info.txt에서 문자열을 읽기
    fgets(buffer, sizeof(buffer), fp); 

	// my_info.txt에 저장된 문자열 한 행 출력
    //printf("%s\n", buffer); 
	
	// fputs로 표현
	fputs(buffer, stdout); 	
	
    fclose(fp);    // 파일 포인터 닫기

    return 0;
}