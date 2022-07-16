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
//	////改变内存，复制一切数据
//
//	struct stu arr1[] = { { "张三", 20 }, { "李四", 30 } };
//	struct stu arr2[3] = { 0 };
//	memcpy(arr2, arr1, sizeof(arr1));
//
//	return 0;
//}

//my_memcpy的实现
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
//	struct stu arr1[] = { { "张三", 20 }, { "李四", 30 } };
//	struct stu arr2[3] = { 0 };
//	my_memcpy(arr2, arr1, sizeof(arr1));
//	return 0;
//}

//int main()
//{
//	int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	my_mymcpy(a + 2, a, 20);//重叠拷贝，虽然倒着拷贝会解决一点问题，但不是全部
//	//重叠拷贝用memmove
//	return 0;
//}

//memmove
//c语言规定，memcpy只需要处理不重叠内存的拷贝即可

//my_memmove的自我实现
//nice!!!
//void*my_memmove(void*dest, const void*src, size_t num)
////分类讨论，有两种情况
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
//	//改进方案
//	else
//	{
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)src + num);//妙哉！！
//		}
//
//	}
//	return tmp;
//}
//int main()
//{
//	int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	my_memmove(a+1, a, 20);
//	//处理重叠拷贝问题
//	return 0;
//}

//memset--内存设置
int main()
{
	int a[10] = { 0 };
	memset(a, 1, 10);
	//将a的前十个字节全部改成1
	//即  01 01 01 01 01 01 01 01 01 01 00 00 00 00 00 00 00 00...... 

	return 0;
}