#include <stdio.h>

//�ṹ���Ա�ķ���
//struct student
//{
//	char name[20];
//	int age;
//};
//int main()
//{
//	struct student stu;
//	strcpy(stu.name, "dd");//�Ҳ����
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
//�ṹ�崫��
void print1(struct S s)
{
	printf("%d\n", s.num);
}
//�ṹ���ַ����
void print2(struct S* ps)
{
	printf("%d\n", ps->num);
}
int main()
{
	print1(s);  //���ṹ��
	print2(&s); //����ַ
	return 0;
}
