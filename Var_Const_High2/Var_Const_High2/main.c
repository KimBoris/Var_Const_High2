#include <stdio.h>	
#include <stdlib.h>
#include <string.h>
//
//int main(void)
//{
//
//	//<<형한정어> >
//	//Volatile
//
//	//변수와 관련된 모든 연산에 대해 컴파일러가 '최적화'규칙을 적용하지 않는다.
//	//컴파일러 최적화에 도움을 주는 Const와는 정반대의 역활을 한다.
//
//
//
//	//int nResult = 0;
//	volatile int nResult = 0;
//	//이와 같이 volatile을 선언하면
//	//릴리즈 모드로해도 이 변수에 의존성을 가진 모든 코드는 '최적화' 과정을 생략한다.
//
//	for (int i = 0; i < 10; ++i)
//	{
//		nResult = 10;
//	}
//
//	printf("%d\n", nResult);
//	return 0;
//} 



//<<외부 변수 선언>>
extern int g_nData; //이미 외부 ~~.c에 정의되어 있는 
					//g_nData에 대한 선언(만) 
void TestFunc(int);
//void TestFunc(int)			//(원형) 선언W
//int main(void)
//{
//
//
//
//	TestFunc(10);
//	return 0;
//}
////현재 World.c, Test.c에 같은 함수가 잇는데
////컴파일 오류는 나지 않지만 링크 오류가 나게 된다.
////why? 설계도로 예를 들자면 자동차를 조립하는데 핸들이 2개가 있는 셈이다.
////world.c, test.c 둘중 어느것의 함수를 call 할것인지 설정을 하지 않으면
////링크 오류가 나게 된다. 

//
//<<형 재선언>>
// 기본형식을 재선언 하는 행위는 자제해야한다.
// ex)

//typedef unsigned int UINT;
////생산성을 올라갈지 모르나
////가독성이 떨어진다
////굉장히 위험한 행위.
//int main()
//{
//	//UINT 는 unsigned int형식과 같다.
//	UINT uData = 10;
//	printf("%u\n", uData);
//
//
//	return 0;
//}




//<<열거형 상수>>

//열거형 상수 ACTION 선언 및 정의
//MOVE는 0(int), JUMP 1, ATTACK 2
enum ACTION { MOVE, JUMP, ATTACK };

//형 재선언을 포함하는 열거형 상수 선언 및 정의
//RED는 100, GREEN은 101, BLUE는 102
typedef enum COLOR { RED = 100, GREEN, BLUE }COLOR;


//캐릭터의 움직임을 나타내는 상수
typedef enum ACTION2
{
	MOVE2,
	JUMP2,
	ATTACK2
}
ACTION2;




//typedef로 함수 포인터 선언하는법
typedef void (__cdecl* PROCDATA)(int);
void TestFunc2(int nParam)
{

}

int main(void)
{
	ACTION2 act2;

	PROCDATA pfData = TestFunc2;
	return 0;
}
