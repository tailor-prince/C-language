#include <stdio.h>

//дһ�������ҳ����������е����ֵ

int get_max(int x, int y)
{
	int z=0;
	if (x >= y)
	{
		z = x;
	}
	else
		z = y;
		return z; //return (x>=y)?(x):(y);
}

//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int max = get_max(num1, num2);
//	printf("max=%d\n", max);
//	return 0;
//}

//дһ���������Խ����������ͱ���������
void swap1(int x, int y)
{
	int z = 0;
	z = x;
	x = y;
	y = x;
}
void swap2(int* px, int* py)
{
	int z = 0;
	z = *px;
	*px = *py;
	*py = z;
}

int main()
{
	int num1 = 10;
	int num2 = 20;
	swap1(num1, num2);
	printf("Swap1->num1=%d num2=%d\n", num1, num2);//����ʧ�ܣ����뺯�����Ǹ���ֵ�������ı�ԭʼ��ַ����ֵ
	swap2(&num1, &num2);
	printf("Swap2->num1=%d num2=%d\n", num1, num2);//�����ɹ�
	return 0;
}

