# include <stdio.h>

//指针的类型决定了指针向前或者向后走一步多大
//int main()
//{
//	int a = 10;
//	char* pc = (char*)&a;
//	int* pi = &a;
//	printf("%p\n", &a); //008FF768
//	printf("%p\n", pc);//008FF768
//	printf("%p\n", pc+1);//008FF769
//	printf("%p\n", pi);//008FF768
//	printf("%p\n", pi+1);//008FF76C
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d]=%p <======> p+%d=%p\n", i, &arr[i], i, p + i);
//	}
//	return 0;
//}

//通过指针访问数组
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}

//二级指针
//int main()
//{
//	int a = 10;
//	int* ppa = &a;//发生错误
//	*ppa = 20;
//	printf("%d\n", a);
//	return 0;
//}