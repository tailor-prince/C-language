#include <stdio.h>

//结构体成员的访问
//struct student
//{
//	char name[20];
//	int age;
//};
//int main()
//{
//	struct student stu;
//	strcpy(stu.name, "dd");//我不李姐
//	stu.age = 20;
//	printf("%s\n", stu.name);
//	printf("%d\n", stu.age);
//	return 0;
//}

//void print(struct student* ps)
//{
//	printf("name=%s  age=%d\n", (*ps).name, (*ps).age);
//	printf("name=%s  age=%d\n", ps->name, ps->age);
////}

//int main()
//{
//	struct student stu = { "dd",20 };
//	print(&stu);
//	return 0;
//}

//struct S
//{
//	int data[1000];
//	int num;
//};
//
//struct S s = { {1,2,3,4},1000 };
//
//void print1(struct S s)
//{
//	printf("%d\n", s.num);
//}
//
//void print2(struct S* pps)
//{
//	printf("%d\n", pps->num);
//}
//
//int main()
//{
//	print1(s);
//	print2(&s);
//	return 0;
//}
struct S
{
	int data[1000];
	int num;
};
struct S s = { {1,2,3,4}, 1000 };
//结构体传参
void print1(struct S s)
{
	printf("%d\n", s.num);
}
//结构体地址传参
void print2(struct S* ps)
{
	printf("%d\n", ps->num);
}
int main()
{
	print1(s);  //传结构体
	print2(&s); //传地址
	return 0;
}
