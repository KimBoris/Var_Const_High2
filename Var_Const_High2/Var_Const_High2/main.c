#include <stdio.h>	
#include <stdlib.h>
#include <string.h>
//
//int main(void)
//{
//
//	//<<��������> >
//	//Volatile
//
//	//������ ���õ� ��� ���꿡 ���� �����Ϸ��� '����ȭ'��Ģ�� �������� �ʴ´�.
//	//�����Ϸ� ����ȭ�� ������ �ִ� Const�ʹ� ���ݴ��� ��Ȱ�� �Ѵ�.
//
//
//
//	//int nResult = 0;
//	volatile int nResult = 0;
//	//�̿� ���� volatile�� �����ϸ�
//	//������ �����ص� �� ������ �������� ���� ��� �ڵ�� '����ȭ' ������ �����Ѵ�.
//
//	for (int i = 0; i < 10; ++i)
//	{
//		nResult = 10;
//	}
//
//	printf("%d\n", nResult);
//	return 0;
//} 



//<<�ܺ� ���� ����>>
extern int g_nData; //�̹� �ܺ� ~~.c�� ���ǵǾ� �ִ� 
					//g_nData�� ���� ����(��) 
void TestFunc(int);
//void TestFunc(int)			//(����) ����W
//int main(void)
//{
//
//
//
//	TestFunc(10);
//	return 0;
//}
////���� World.c, Test.c�� ���� �Լ��� �մµ�
////������ ������ ���� ������ ��ũ ������ ���� �ȴ�.
////why? ���赵�� ���� ���ڸ� �ڵ����� �����ϴµ� �ڵ��� 2���� �ִ� ���̴�.
////world.c, test.c ���� ������� �Լ��� call �Ұ����� ������ ���� ������
////��ũ ������ ���� �ȴ�. 

//
//<<�� �缱��>>
// �⺻������ �缱�� �ϴ� ������ �����ؾ��Ѵ�.
// ex)

//typedef unsigned int UINT;
////���꼺�� �ö��� �𸣳�
////�������� ��������
////������ ������ ����.
//int main()
//{
//	//UINT �� unsigned int���İ� ����.
//	UINT uData = 10;
//	printf("%u\n", uData);
//
//
//	return 0;
//}




//<<������ ���>>

//������ ��� ACTION ���� �� ����
//MOVE�� 0(int), JUMP 1, ATTACK 2
enum ACTION { MOVE, JUMP, ATTACK };

//�� �缱���� �����ϴ� ������ ��� ���� �� ����
//RED�� 100, GREEN�� 101, BLUE�� 102
typedef enum COLOR { RED = 100, GREEN, BLUE }COLOR;


//ĳ������ �������� ��Ÿ���� ���
typedef enum ACTION2
{
	MOVE2,
	JUMP2,
	ATTACK2
}
ACTION2;




//typedef�� �Լ� ������ �����ϴ¹�
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
