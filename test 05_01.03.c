#include <stdio.h>

//单目操作符
//int main()
//{
//	int a = -10;
//	int* p = NULL;
//	printf("%d\n", !2);
//	printf("%d\n", !0);
//	a = -a;
//	p = &a;
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof a);
//	//printf("%d\n", sizeof int); 报错
//	return 0;
//}

//sizeof和数组
void test1(int arr[])
{
	printf("%d\n", sizeof(arr));
}
void test2(char arr[])
{
	printf("%d\n", sizeof(arr));
}

//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));//输出结果为40
//	printf("%d\n", sizeof(ch));//输出结果为10
//	test1(arr);//输出结果为4
//	test2(ch);//输出结果为4
//	return 0;
//}

//++和--
//前置++：先++，后使用（赋值）
//int main()
//{
//	int a = 10;
//	int x = ++a;
//	printf("%d\n", a);//输出结果为11
//	int y = --a;
//	printf("%d\n", a);//输出结果为10
//	printf("%d\n", x);//输出结果为11
//	printf("%d\n", y);//输出结果为10
//	return 0;
//}
//后置++：先使用（赋值），后++
//int main()
//{
//	int a = 10;
//	int x = a++;
//	printf("%d\n", a);//输出结果为11
//	int y = a--;
//	printf("%d\n", a);//输出结果为10
//	printf("%d\n", x);//输出结果为10
//	printf("%d\n", y);//输出结果为11
//	return 0;
//}

//逻辑与/或
//int main()
//{
//	int i = 0,j=0, a = 0, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++;
//	j = a++ || ++b || d++;
//	//printf("a=%d\n b=%d\n c=%d\n d=%d\n", a, b, c, d);//输出结果为1，2，3，4
//	printf("a=%d\n b=%d\n c=%d\n d=%d\n", a, b, c, d);//输出结果为1，3，3，4 存疑
//	return 0;
//}

//条件操作符
int main()
{
	int a = 6,b;
	/*if (a > 5)
	{
		b = 3;
	}
	else
		b = -3;*/
	a > 5 ? b = 3 : -3;
	printf("% d\n", b);
}