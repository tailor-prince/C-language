#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

//do while ѭ��
//int main()
//{
//	int i = 10;
//	do
//	{
//		printf("%d\n", i);
//	} while (i < 10);
//	return 0;
//}

//break��continue
//int main()
//{
//	int i = 5;
//	do
//	{
//		if (5 == i)
//		{
//			break;
//		}
//		printf("%d\n", i);
//	} while (i < 10);
//	return 0;
//}
//int main()
//{
//	int i = 5;
//	do
//	{
//		if (5 == i)
//		{
//			continue;
//		}
//		printf("%d\n", i);
//	} while (i < 10);
//	return 0;
//}

//����n�Ľ׳�
//int main()
//{
//	int i,j;
//	scanf("%d", &i);
//	int a = 1;
//	for (j = 1; j <= i; j++)
//	{
//		a = a * j;
//	}
//	printf("%d\n", a);
//	return 0;
//}

//����1!+2!+3!+����+10!
//int factorial(int a)
//{
//	int start = 1;
//	int i;
//	for (i = 1; i <= a; i++)
//	{
//		start = i * start;
//	}
//	return start;
//}

//int main()
//{
//	int i;
//	int a = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		a = factorial(i) + a;
//	}
//	printf("�׳˵ĺ��ǣ�%d\n", a);
//	return 0;
//}

//�ж�һ�����Ƿ�Ϊ����
//int main()
//{
//	int a=6;
//	//scanf("%d\n", &a); ��������ˣ�scanf������ô��
//	if (a % 2 == 0)
//	{
//		printf("����һ��ż��");
//	}
//	else
//	{
//		printf("����һ������");
//	}
//	return 0;
//}

//���1-100֮�������
int main()
{
	int i = 0;
	for (i = 1; i <= 100; i++)
	{
		if  (i % 2 == 1)
		{
			printf("%d ", i);
		}
	}
	return 0;
}