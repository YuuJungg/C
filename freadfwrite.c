#include <stdio.h>
#include <string.h>

int main() {

    FILE *fp;
    char input[100] = "Sunny and Windy\n";
    char output[100];

    fp = fopen("weather.txt", "w");

    if( fp == NULL )
        return -1;
	
	//fwrite(쓸 문자열의 주소, 문자열 사이즈, 반복 횟수, 쓸 파일 포인터)
    fwrite(input, strlen(input), 3, fp);
    fclose(fp);

    fp = fopen("weather.txt", "r");

    if( fp == NULL )
        return -1;
	
	//fread(저장할 문자열의 주소, 문자열 사이즈, 반복 횟수, 읽을 파일 포인터)
    fread(output, sizeof(output), 2, fp);
    printf("Today>> %s", output);
    fclose(fp);


    return 0;
}