#include <stdio.h>

//函数的嵌套调用
void new_line()
{
	printf("come on!\n");
}
void three_line()
{
	int i = 0;
	for (i = 0; i <= 3; i++)
	{
		new_line();
	}
}

//int main()
//{
//	three_line();
//	return 0;
//}

//链式访问（将一个函数的返回值作为另一个函数的参数）
//int main()
//{
//	char arr[20] = "hello";
//	//printf(strcat(arr,"tomorrow")); 输出结果为hellotomorrow
//	int ret = strlen(strcat(arr, "tomorrow"));
//	printf("%d\n", ret);
//	return 0;
//}

int main()
{
	printf("%d", printf("%d", printf("%d", 55)));//结果为5521
	//注：printf函数的返回值是打印在屏幕上的字符的个数
	return 0;
}

/*
函数声明：告诉编译器有一个函数叫什么，参数是什么，返回类型是什么。但是具体是不是存在，函数
声明决定不了；函数的声明一般出现在函数的使用之前。要满足先声明后使用；函数的声明一般要放在头文件中的。
*/

//函数的声明和调用去看视频；函数递归