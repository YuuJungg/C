#include <stdio.h>

int main( void)
{
   FILE *fp;
   char  str[100];

   fp = fopen( "fruit.txt", "r");
   while( !feof( fp))            // 파일의 끝을 만난 때 까지 루프
   {
      fgets(str, 100, fp);
      printf( "%s", str);
   }
   fclose(fp);

   return 0;
}