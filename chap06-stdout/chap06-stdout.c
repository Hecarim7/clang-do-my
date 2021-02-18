/*
* puts char const -Buffer
* const constant 상수형 불변
* variable 변수
*/

#include <stdio.h>

#define TITLE "c 표준 라이브러리 표준 출력함수"

#define PUTCHAR(c) putc((c), stdout)
#define PUTERROR(c) putc((c), stderr)
void putchar_1();
void putchar_2();
void putchar_3();
void putchar_4();
void main()
{
	printf("%s\n", TITLE);

	int x = putchar(1024);
	printf("x(%c)(%d)\n",x,x);
	/*putchar(127);
	putchar('\n');
	putchar(128);
	putchar('\n');
	putchar(159);
	putchar('\n');
	putchar(205);
	putchar('\n');
	putchar(208);
	putchar('\n');
	//putchar_1();
	//putchar_2();
	///putchar_3();
	//putchar_4();
	*/
}
void putchar_1()
{
	printf("%s\n", "putchar() 출력함수\n");
	//putchar(TITLE); // 스트링을 출력할 수 없음
	putchar('a');
	putchar('\n');
	putchar('b');
	putchar('\n');
	putchar('c');
	putchar('\n');
	putchar('65');
	putchar('\n');
	putchar('A');

}
void putchar_2()
{
	printf("putchar() 출력함수 오류 테스트\n");
	//char rt = (TITLE); // 스트링을 출력할 수 없음
	//putchar('\n');

	char ra = putchar('a');
	putchar('\n');
	

	//printf("rt(%c), ra(%c)\n", rt, ra);
	
}
void putchar_3()
{
	putc('A', stdout);
	putc('B', stdout);
	PUTCHAR('C');
	PUTERROR('E');


}
void putchar_4()

{
	puts("표준 스트링 함수!");
	puts(TITLE);
}