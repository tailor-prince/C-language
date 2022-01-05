# include <stdio.h>

//逗号表达式
//int main()
//{
//int a = 1;
//int b = 2;
//int c = (a > b, a = b + 10, a, b = a + 1);
//printf("%d\n", c);
//return 0;
//}

//函数调用操作符
void test(const char* str)//什么类型
{
	printf("%s\n", str);
}
//int main()
//{
//	test("hello world");
//	return 0;
//}

//访问结构体成员
struct student
{
	char name[10];
	int age;
	char sex[5];
	double score;
};
void set_age1(struct student stu)
{
	stu.age = 18;
}
void set_age2(struct student* pstu)
{
	pstu->age = 18;//结构成员访问
}
int main()
{
	struct student stu;
	struct student* pstu=&stu;
	stu.age = 20;
	printf("%d\n", stu.age);
	set_age1(stu);
	printf("%d\n", stu.age);//结果是错的

	pstu->age = 20;
	printf("%d\n", pstu->age);
	set_age2(pstu);
	printf("%d\n", pstu->age);
	return 0;
}