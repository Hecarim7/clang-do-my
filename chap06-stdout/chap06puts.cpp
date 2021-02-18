/*
* puts char const -Buffer
* const constant 상수형 불변
* variable 변수
*/

#include <stdio.h>

#define TITLE "c 표준 라이브러리 표준 출력함수"

/*
* putx (char const* str)
* str 출력하고자 하는 문자열
* return  없음
*/
void putx(char const* str)
{	
	//str[0] = 'x';
	puts(str);
	putchar(str[0]);
	putchar(str[1]);
	putchar(str[2]);
	putchar(str[3]);
	putchar(str[4]);
	putchar('\n');

}

void putv(char * str)
{
	puts(str);
	//    const 는 불변이므로  변경xxx 
	str[0] = 'X';
	putchar(str[0]);
	putchar(str[1]);
	putchar(str[2]);
	putchar(str[3]);
	putchar(str[4]);
	putchar(str[5]);
	putchar(str[6]);
	putchar('\n');
}

/*
*/
void main()
{
	//char* first = "first";
	char first[] = "first";
	char second[] = "second";
	printf("%s\n", TITLE);

	putx(first );

	//second 값이 변경됨
	putv(second);
	puts(second); 


}

