#include <stdio.h>

//��Ŀ������
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
//	//printf("%d\n", sizeof int); ����
//	return 0;
//}

//sizeof������
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
//	printf("%d\n", sizeof(arr));//������Ϊ40
//	printf("%d\n", sizeof(ch));//������Ϊ10
//	test1(arr);//������Ϊ4
//	test2(ch);//������Ϊ4
//	return 0;
//}

//++��--
//ǰ��++����++����ʹ�ã���ֵ��
//int main()
//{
//	int a = 10;
//	int x = ++a;
//	printf("%d\n", a);//������Ϊ11
//	int y = --a;
//	printf("%d\n", a);//������Ϊ10
//	printf("%d\n", x);//������Ϊ11
//	printf("%d\n", y);//������Ϊ10
//	return 0;
//}
//����++����ʹ�ã���ֵ������++
//int main()
//{
//	int a = 10;
//	int x = a++;
//	printf("%d\n", a);//������Ϊ11
//	int y = a--;
//	printf("%d\n", a);//������Ϊ10
//	printf("%d\n", x);//������Ϊ10
//	printf("%d\n", y);//������Ϊ11
//	return 0;
//}

//�߼���/��
//int main()
//{
//	int i = 0,j=0, a = 0, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++;
//	j = a++ || ++b || d++;
//	//printf("a=%d\n b=%d\n c=%d\n d=%d\n", a, b, c, d);//������Ϊ1��2��3��4
//	printf("a=%d\n b=%d\n c=%d\n d=%d\n", a, b, c, d);//������Ϊ1��3��3��4 ����
//	return 0;
//}

//����������
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