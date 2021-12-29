#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//while循环
//break
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{ 
//		if (i % 5 == 0)
//		{
//			break;
//		}
//		printf("%d ", i);
//		i += 1;
//	}//while必须加大括号
//	return 0;
//}

//continue
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//		{
//			continue;
//		}
//		printf("%d ", i);
//		i += 1;
//	}//while必须加大括号
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	while (i <= 10)
//	{
//		i += 1;
//		if (i == 5)
//		{
//			continue;
//		}
//		printf("%d ", i);
//		
//	}//while必须加大括号
//	return 0;
//}

//for循环
//int main()
//{
//	int i = 1;//不可注释这行代码
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d\n", i);
//	}
//	return 0;
//}

//break和continue
//int main()
//{
//	int i = 1;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//		{
//			break;
//		}
//		printf("%d\n", i);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//		{
//			continue;
//		}
//		printf("%d\n", i);
//	}
//	return 0;
//}

//嵌套
int main()
{
	int i = 0;
	int j = 0;
	/*for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			printf("hehe\n");
		}
	}*/
	/*for (; i < 3; i++)
	{
		for (; j < 3; j++)
		{
			printf("hehe\n");
		}    //我不理解
	}*/
	int x, y;
	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
	{
		printf("hehe\n");
	}
	return 0;
}