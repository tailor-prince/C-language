#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//写代码将三个整数按从大到校输出
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//
//	//输入
//	scanf("%d%d%d", &a, &b, &c);
//
//	//调整顺序
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//
//	//输出
//	printf("%d%d%d\n", a, b, c);
//	return 0;
//}

//打印1-100中3的倍数
//int main()
//{
//	int i = 0;
//	//for (i = 1;i <= 100; i++)
//	//{
//	//	if (i % 3 == 0)
//	//	{
//	//		printf("%d ", i);
//	//	}
//	//}
//	for (i = 3; i <= 100; i += 3)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}

//求两个数的最大公约数
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//
//	int max = 0;
//	if (m > n)
//		max = n;
//	else
//		max = m;
//
//	while (1)
//	{
//		if (m % max == 0 && n % max == 0)
//		{
//			printf("最大公约数是：%d\n", max);
//			break;
//		}
//		max--;
//	}
//	return 0;
//}

//辗转相除法
int main()
{
	int m = 0;
	int n = 0;
	scanf("%d%d", &m, &n);

	int t = 0;
	while (m % n)
	{
		t = m % n;
		m = n;
		n = t;
	}
	printf("最大公约数是：%d\n", n);
	return 0;
}