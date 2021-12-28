#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//if语句
//int main()
//{
//	int age=0;
//	scanf("%d", &age);
//	if (age < 18)
//	{
//		printf("少年\n");
//	}
//	else if (age >= 18 && age < 30)
//	{
//		printf("青年\n");
//	}
//	else if (age >= 30 && age < 50)
//	{
//		printf("中年\n");
//	}
//	else if (age >= 50 && age < 80)
//	{
//		printf("老年\n");
//	}
//	else
//	{
//		printf("老寿星\n");
//	}
//	return 0;
//}

//else和离得最近的if匹配
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	//{
//		if (b == 2)
//		{
//			printf("hehe\n");
//		}
//	//}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}

//switch语句
//int main()
//{
//	int day = 2;
//	switch (day)
//	{
//	case 1:
//	{
//		printf("星期一");
//		break;
//	}
//	case 2:
//		printf("星期二");
//		break;
//	case 3:
//		printf("星期三");
//		break;
//	case 4:
//		printf("星期四");
//		break;
//	case 5:
//		printf("星期五");
//		break;
//	case 6:
//		printf("星期六");
//		break;
//	case 7:
//		printf("星期天");
//		break;
//	}
//	return 0;
//}

int main()
{
	int day = 3;
	switch (day)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("工作日\n");
		break;
	case 6:
	case 7:
		printf("周末\n");
		break;
	}
	return 0;
}