# include <stdio.h>

//�ṹ������Ķ���ͳ�ʼ��
struct point
{
	int x;
	int y;
}p1;//�������P1
struct point p2;//�������P2
struct point p3={1,2};//�������P3������ʼ��
struct stu
{
	char name[15];
	int age;
};
struct stu s = { "����",20 };

struct node
{
	int data;
	struct point p;
	struct node* next;
}n1={10,{4,5},NULL };

struct node n2={ 20, { 5,6 }, NULL};