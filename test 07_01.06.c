# include <stdio.h>

//结构体变量的定义和初始化
struct point
{
	int x;
	int y;
}p1;//定义变量P1
struct point p2;//定义变量P2
struct point p3={1,2};//定义变量P3，并初始化
struct stu
{
	char name[15];
	int age;
};
struct stu s = { "张三",20 };

struct node
{
	int data;
	struct point p;
	struct node* next;
}n1={10,{4,5},NULL };

struct node n2={ 20, { 5,6 }, NULL};