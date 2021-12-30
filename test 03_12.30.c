#include <stdio.h>

//写一个函数找出两个整数中的最大值

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

//写一个函数可以交换两个整型变量的内容
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
	printf("Swap1->num1=%d num2=%d\n", num1, num2);//交换失败，传入函数的是复制值，并不改变原始地址的数值
	swap2(&num1, &num2);
	printf("Swap2->num1=%d num2=%d\n", num1, num2);//交换成功
	return 0;
}

