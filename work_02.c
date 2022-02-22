#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//打印1000年到2000年之间的闰年

//自己写的
//int main()
//{
//	int i = 1000;
//	int count = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (i % 100 == 0)
//		{
//			if (i % 400 == 0)
//			{
//				count += 1;
//		}
//		}
//		else
//		{
//			if (i % 4 == 0)
//			{
//				count += 1;
//			}
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}
// 
//1 被4整除，不能被100整除
//2 能被400整除
//int main()
//{
//	int y = 1000;
//	int count = 0;
//	for (y = 1000; y <= 2000; y++)
//		/*{
//		if (y % 4 == 0)
//		{
//			if (y % 100 != 0)
//			{
//				printf("%d\n", y);
//				count++;
//			}
//		}
//		if (y % 400 == 0)
//		{
//			printf("%d\n", y);
//			count++;
//		}
//	}*/
//	{
//		if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//		{
//			printf("%d ", y);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}

//打印100-200之间的素数(素数就是质数，只能被一和它本身整除）
int main()
{
	int i = 100;
	//for (i = 100; i <= 200; i++)
	for (i = 101; i <= 200; i+=2)
	{
		int j = 2;
		//for (j = 2; j <= i - 1; j++)
		for (j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0)
				break;
		}
		if (i==j)
		{
			printf("%d ", i);
		}
	}
	return 0;
}