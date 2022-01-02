#include <stdio.h>

//左移操作符
//int main()
//{
//	int num = 10;
//	printf("%d\n", num << 1);//结果为20
//	return 0;
//}

//右移操作符
//int main()
//{
//	int num = -1;
//	printf("%d\n", num >> 1);//输出结果为-1，属于算术右移（左边补符号位）；逻辑右移（左边补0）
//	return 0;
//}

//位操作数
//int main()
//{
//	int num1 = 1;
//	int num2 = 2;
//	printf("%d\n", num1 & num2);//0
//	printf("%d\n", num1 | num2);//3
//	printf("%d\n", num1 ^ num2);//3
//	return 0;
//}

//不创建临时变量，实现两个数的变换
//int main()
//{
//	int a = 10;
//	int b = 20;
//	a = a ^ b;
//	b = a ^ b;
//	a = b ^ a;
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}

//赋值操作符
int weight = 150;
weight = 120;
double salary = 10000.0;
salary = 30000.0;
