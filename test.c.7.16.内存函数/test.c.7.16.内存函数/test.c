#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <string.h>
#include<assert.h>
struct stu{
	char name[20];
	int age;
};

//int main()
//{
//	//int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	//int arr2[10] = { 0 };
//	//memcpy(arr2, arr1, sizeof(arr1));
//	////�ı��ڴ棬����һ������
//
//	struct stu arr1[] = { { "����", 20 }, { "����", 30 } };
//	struct stu arr2[3] = { 0 };
//	memcpy(arr2, arr1, sizeof(arr1));
//
//	return 0;
//}

//my_memcpy��ʵ��
//void*my_memcpy(void*dest, void*src, size_t sz)
//{
//	void*tmp = dest;
//	assert(dest&&src);
//	/*int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		*(char*)dest =*(char*)src;
//		++(char*)dest;
//		((char*)src)++;
//	}*/
//	while (sz--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		((char*)src)++;
//	}
//	return tmp;
//}


//int main()
//{
//	struct stu arr1[] = { { "����", 20 }, { "����", 30 } };
//	struct stu arr2[3] = { 0 };
//	my_memcpy(arr2, arr1, sizeof(arr1));
//	return 0;
//}

//int main()
//{
//	int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	my_mymcpy(a + 2, a, 20);//�ص���������Ȼ���ſ�������һ�����⣬������ȫ��
//	//�ص�������memmove
//	return 0;
//}

//memmove
//c���Թ涨��memcpyֻ��Ҫ�����ص��ڴ�Ŀ�������

//my_memmove������ʵ��
//nice!!!
//void*my_memmove(void*dest, const void*src, size_t num)
////�������ۣ����������
//{
//	assert(dest&&src);
//	void*tmp = dest;
//	if (dest < src)
//	{
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			((char*)src)++;
//		}
//		//return tmp;
//	}
//		/*
//		if (dest>src)
//		{
//			(char*)dest += num - 1;
//			(char*)src += num - 1;
//			while (num--)
//			{
//				*(char*)dest = *(char*)src;
//				((char*)dest)--;
//				((char*)src)--;
//			}
//			return tmp;
//		}*/
//	//�Ľ�����
//	else
//	{
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)src + num);//���գ���
//		}
//
//	}
//	return tmp;
//}
//int main()
//{
//	int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	my_memmove(a+1, a, 20);
//	//�����ص���������
//	return 0;
//}

//memset--�ڴ�����
int main()
{
	int a[10] = { 0 };
	memset(a, 1, 10);
	//��a��ǰʮ���ֽ�ȫ���ĳ�1
	//��  01 01 01 01 01 01 01 01 01 01 00 00 00 00 00 00 00 00...... 

	return 0;
}