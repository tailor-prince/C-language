#include <stdio.h>

//二维数组的创建

int arr1[3][4] = {1,2,3,4};
char arr2[3][5] = { {1,2},{4,5} };
double arr3[2][4];
int arr4[][4] = { {2,3},{4,5} };//二维数组如果有初始化，行可以省略，列不能省略

//二维数组的使用
//int main()
//{
//	int arr[3][4] = { 0 };
//	int i, j;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			arr[i][j] = i * 4 + j;
//		}
//	}
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int arr[3][4] = { 0 };
//	int i, j;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d]:%p\n", i, j, &arr[i][j]);
//		}
//	}
//	return 0;
//}

//数组越界
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		printf("%d\n", arr[i]);//事实上，当i=10时，数组越界了。
//	}
//	return 0;
//}

//数组名的含义
int main()
{
	int arr[5] = { 1,2,3,4,5 };
	printf("%p\n", arr);
	printf("%p\n", &arr[0]);
	printf("%d\n", *arr);
	return 0;
}/*数组名是数组首元素的地址。但是：1. sizeof(数组名)，计算整个数组的大小，sizeof内部单独放一个数组名，数组名表示整个数
组。
                                   2. & 数组名，取出的是数组的地址。 & 数组名，数组名表示整个数组。*/
//冒泡排序做一下