/*
* puts char const -Buffer
* const constant ����� �Һ�
* variable ����
*/

#include <stdio.h>

#define TITLE "c ǥ�� ���̺귯�� ǥ�� ����Լ�"

/*
* putx (char const* str)
* str ����ϰ��� �ϴ� ���ڿ�
* return  ����
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
	//    const �� �Һ��̹Ƿ�  ����xxx 
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

	//second ���� �����
	putv(second);
	puts(second); 


}

