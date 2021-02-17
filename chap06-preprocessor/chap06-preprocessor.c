/*
* #define(재정의)
*/
// define 은 대문자를 쓴다
// 상수 : 변하지 않는 값  식별
// 전역변수 float pi = 3.14592; 

#include <stdio.h>

#define PI  3.141592f

#define POWX(x) (x * x)

#define CIRCLE_AREA(r) (PI *(r*r))
#define CIRCLE_AREA2(r) (PI * POWX(r))
// 치환 (3.141592f * (3.0f * 3.0f))
#define CIRCLE_AREA3(r) PI * POWX(r)
#define CIRCLE_AROUND(r) (PI *2*r)
// c언어에서 참 0 이아닌수

#define TRUE    1
#define FALSE   0

float circle_area(float r);
float circle_around(float r);
void main()
{
    float pi = 3.141592f;

    printf("pi(%f)\n", pi);
    printf("PI(%f)\n", PI);
    printf("원의넓이: 반지름(%f), 넓이는(%f)\n", 3.0f, circle_area(3.0f));
    printf("원의넓이: 반지름(%f), 둘레는(%f)\n", 3.0f, circle_around(3.0f));
    printf("원의넓이: 반지름(%f), 넓이는(%f)\n", 3.0f, CIRCLE_AREA(3.0f));
    printf("원의넓이: 반지름(%f), 둘레는(%f)\n", 3.0f, CIRCLE_AROUND(3.0f));

    float x1 = 10.0f / CIRCLE_AREA(3.0f);
    float x2 = 10.0f / CIRCLE_AREA3(3.0f);
    printf("원의넓이: 반지름(%f), 넓이*2(%f)\n", 3.0f, x1 );
    printf("원의넓이: 반지름(%f), 넓이*2(%f)\n", 3.0f, x2);
}

float circle_area(float r)
{
    return PI * (r * r);
    
}


float circle_around(float r)
{
    return 2 * PI * r;
     
}