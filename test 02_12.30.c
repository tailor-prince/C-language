#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

//do while 循环
//int main()
//{
//	int i = 10;
//	do
//	{
//		printf("%d\n", i);
//	} while (i < 10);
//	return 0;
//}

//break和continue
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

//计算n的阶乘
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

//计算1!+2!+3!+……+10!
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
//	printf("阶乘的和是：%d\n", a);
//	return 0;
//}

//判断一个数是否为奇数
//int main()
//{
//	int a=6;
//	//scanf("%d\n", &a); 这里出错了，scanf究竟怎么用
//	if (a % 2 == 0)
//	{
//		printf("这是一个偶数");
//	}
//	else
//	{
//		printf("这是一个奇数");
//	}
//	return 0;
//}

//输出1-100之间的奇数
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