#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//if���
//int main()
//{
//	int age=0;
//	scanf("%d", &age);
//	if (age < 18)
//	{
//		printf("����\n");
//	}
//	else if (age >= 18 && age < 30)
//	{
//		printf("����\n");
//	}
//	else if (age >= 30 && age < 50)
//	{
//		printf("����\n");
//	}
//	else if (age >= 50 && age < 80)
//	{
//		printf("����\n");
//	}
//	else
//	{
//		printf("������\n");
//	}
//	return 0;
//}

//else����������ifƥ��
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

//switch���
//int main()
//{
//	int day = 2;
//	switch (day)
//	{
//	case 1:
//	{
//		printf("����һ");
//		break;
//	}
//	case 2:
//		printf("���ڶ�");
//		break;
//	case 3:
//		printf("������");
//		break;
//	case 4:
//		printf("������");
//		break;
//	case 5:
//		printf("������");
//		break;
//	case 6:
//		printf("������");
//		break;
//	case 7:
//		printf("������");
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
		printf("������\n");
		break;
	case 6:
	case 7:
		printf("��ĩ\n");
		break;
	}
	return 0;
}