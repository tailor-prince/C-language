#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum;
//	printf("����������������");
//	scanf("%d %d", &num1, &num2);//scanf��%d��%d֮���Ƿ���ԼӶ��ţ�
//	sum = num1 + num2;
//	printf("sum=%d\n", sum);
//	return 0;
//}

//int main()
//{
//	const pai = 3.14;//const���ε��ǳ�����
//	//pai = 5.14;ֱ���޸Ļᱨ��
//#define max 100//C�����������������κ����壿
//	printf("%d\n", max);
//	return 0;
//}

//�������
//int main() 
//{
//	int code;
//	printf("���һֱ���������1����0\n");
//	scanf("%d", &code);//%d�����һ��\n�����Ϊʲô��
//	if (code == 1)
//	{
//		printf("���ͣ���һ����ɹ���");
//	}
//	else
//	{
//		printf("������������");
//	}
//	return 0;
//}

//ѭ�����
//int main()
//{
//	int code = 0;
//	while (code <= 2000)
//	{
//		printf("��Ҫ��������ѽ��");
//		++code;
//	}
//	if (code > 2000)
//	{
//		printf("�ܺ�ѽ������Ŭ����");
//	}
//	return 0;
//}

//����
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int num1, num2;
//	printf("����������������");
//	scanf("%d%d", &num1, &num2);
//	int sum = Add(num1, num2);
//	printf("sum=%d", sum);
//	return 0;
//}

//����
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}

//ָ��
//int main()
//{
//	int a = 10;
//	printf("%p\n", &a);
//	int* p = &a;
//	*p = 20;
//	printf("%d\n", a);
//	printf("%d\n", sizeof(int*));
//	return 0;
//}

//�ṹ��
struct student
{
	char name[20];
	int age;
	char sex[5];
	char id[15];
};
int main()
{
	struct student s = { "����",18,"��","1000055" };
	printf("name:%s age:%d sex:%s id:%s\n", s.name, s.age, s.sex, s.id);
	struct student* ps = &s;
	printf("name:%s age:%d sex:%s id:%s\n", ps->name, ps->age, ps->sex, ps->id);
	return 0;
}