# include <stdio.h>

//���ű��ʽ
//int main()
//{
//int a = 1;
//int b = 2;
//int c = (a > b, a = b + 10, a, b = a + 1);
//printf("%d\n", c);
//return 0;
//}

//�������ò�����
void test(const char* str)//ʲô����
{
	printf("%s\n", str);
}
//int main()
//{
//	test("hello world");
//	return 0;
//}

//���ʽṹ���Ա
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
	pstu->age = 18;//�ṹ��Ա����
}
int main()
{
	struct student stu;
	struct student* pstu=&stu;
	stu.age = 20;
	printf("%d\n", stu.age);
	set_age1(stu);
	printf("%d\n", stu.age);//����Ǵ��

	pstu->age = 20;
	printf("%d\n", pstu->age);
	set_age2(pstu);
	printf("%d\n", pstu->age);
	return 0;
}