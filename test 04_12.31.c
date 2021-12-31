#include <stdio.h>

//数组的创建
//int arr1[10];

//int a = 10;
//int arr2[a];//必须是常量

//数组的初始化
//int arr2[10] = { 1,2,3 };
//int arr3[] = { 1,2,3,4 };
//int arr4[5] = { 1,2,3,4,5 };
//char arr5[3] = { 98,'a','f' };
//char arr6[] = { 'a','b','c' };
//char arr7[] = "abcdef";

//一维数组的使用
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组中元素的个数
//	printf("数组元素个数为：%d\n",sz);
//	//为arr赋值0-9
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	//输出数组中的每一个元素
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}

//一维数组在内存中的存储
int main()
{
	int arr[10] = { 0 };
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("&arr[%d]=%p\n", i, &arr[i]);
	}
	return 0;
}