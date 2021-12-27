#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum;
//	printf("请输入两个整数：");
//	scanf("%d %d", &num1, &num2);//scanf中%d和%d之间是否可以加逗号？
//	sum = num1 + num2;
//	printf("sum=%d\n", sum);
//	return 0;
//}

//int main()
//{
//	const pai = 3.14;//const修饰的是常变量
//	//pai = 5.14;直接修改会报错
//#define max 100//C语言中缩进不代表任何意义？
//	printf("%d\n", max);
//	return 0;
//}

//条件语句
//int main() 
//{
//	int code;
//	printf("你会一直坚持吗？输入1或者0\n");
//	scanf("%d", &code);//%d后面加一个\n会错误，为什么？
//	if (code == 1)
//	{
//		printf("加油！你一定会成功的");
//	}
//	else
//	{
//		printf("啊啊啊，辣鸡");
//	}
//	return 0;
//}

//循环语句
//int main()
//{
//	int code = 0;
//	while (code <= 2000)
//	{
//		printf("还要继续加油呀！");
//		++code;
//	}
//	if (code > 2000)
//	{
//		printf("很好呀，继续努力！");
//	}
//	return 0;
//}

//函数
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int num1, num2;
//	printf("请输入两个整数：");
//	scanf("%d%d", &num1, &num2);
//	int sum = Add(num1, num2);
//	printf("sum=%d", sum);
//	return 0;
//}

//数组
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}

//指针
//int main()
//{
//	int a = 10;
//	printf("%p\n", &a);
//	int* p = &a;
//	*p = 20;
//	printf("%d\n", a);
//	printf("%d\n", sizeof(int*));
//	return 0;
//}

//结构体
struct student
{
	char name[20];
	int age;
	char sex[5];
	char id[15];
};
int main()
{
	struct student s = { "张三",18,"男","1000055" };
	printf("name:%s age:%d sex:%s id:%s\n", s.name, s.age, s.sex, s.id);
	struct student* ps = &s;
	printf("name:%s age:%d sex:%s id:%s\n", ps->name, ps->age, ps->sex, ps->id);
	return 0;
}