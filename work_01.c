#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//д���뽫�����������Ӵ�У���
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//
//	//����
//	scanf("%d%d%d", &a, &b, &c);
//
//	//����˳��
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
//	//���
//	printf("%d%d%d\n", a, b, c);
//	return 0;
//}

//��ӡ1-100��3�ı���
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

//�������������Լ��
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
//			printf("���Լ���ǣ�%d\n", max);
//			break;
//		}
//		max--;
//	}
//	return 0;
//}

//շת�����
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
	printf("���Լ���ǣ�%d\n", n);
	return 0;
}