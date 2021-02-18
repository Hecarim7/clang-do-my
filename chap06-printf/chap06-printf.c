/*
* printf 
*/

#include <stdio.h>
#define TITLE "C언어 표준 라이브러리와 표준 출력함수 (printf)"
void main()
{
	
	printf("%s\n", TITLE);

	char data = 95;
	printf("%c의 ASCII 값은 %d입니다", data, data);

	float value = 2.1f;
	printf("%f 아래꺼출력", value);


}
