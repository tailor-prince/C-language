#include <stdio.h>

//����Ĵ���
//int arr1[10];

//int a = 10;
//int arr2[a];//�����ǳ���

//����ĳ�ʼ��
//int arr2[10] = { 1,2,3 };
//int arr3[] = { 1,2,3,4 };
//int arr4[5] = { 1,2,3,4,5 };
//char arr5[3] = { 98,'a','f' };
//char arr6[] = { 'a','b','c' };
//char arr7[] = "abcdef";

//һά�����ʹ��
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//����������Ԫ�صĸ���
//	printf("����Ԫ�ظ���Ϊ��%d\n",sz);
//	//Ϊarr��ֵ0-9
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	//��������е�ÿһ��Ԫ��
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}

//һά�������ڴ��еĴ洢
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