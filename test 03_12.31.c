#include <stdio.h>

//������Ƕ�׵���
void new_line()
{
	printf("come on!\n");
}
void three_line()
{
	int i = 0;
	for (i = 0; i <= 3; i++)
	{
		new_line();
	}
}

//int main()
//{
//	three_line();
//	return 0;
//}

//��ʽ���ʣ���һ�������ķ���ֵ��Ϊ��һ�������Ĳ�����
//int main()
//{
//	char arr[20] = "hello";
//	//printf(strcat(arr,"tomorrow")); ������Ϊhellotomorrow
//	int ret = strlen(strcat(arr, "tomorrow"));
//	printf("%d\n", ret);
//	return 0;
//}

int main()
{
	printf("%d", printf("%d", printf("%d", 55)));//���Ϊ5521
	//ע��printf�����ķ���ֵ�Ǵ�ӡ����Ļ�ϵ��ַ��ĸ���
	return 0;
}

/*
�������������߱�������һ��������ʲô��������ʲô������������ʲô�����Ǿ����ǲ��Ǵ��ڣ�����
�����������ˣ�����������һ������ں�����ʹ��֮ǰ��Ҫ������������ʹ�ã�����������һ��Ҫ����ͷ�ļ��еġ�
*/

//�����������͵���ȥ����Ƶ�������ݹ�