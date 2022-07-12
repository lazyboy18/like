#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>

//比较整型数组
int cmp(void*e1, void*e2)
{
	if (*(int*)e1 - *(int*)e2 > 0)
		return 1;
}



//比较浮点点型数组
//int cmp(void*e1, void*e2)
//{
//	if (*(float*)e1 - *(float*)e2 > 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//	//else语句用于避免函数被调用是返回随机值
//	或者将bubble_sort函数内部的if语句的判定条件改为1
//}

void Swap(char*butt1, char*butt2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *butt1;
		*butt1 = *butt2;
		*butt2 = tmp;
		butt1++;
		butt2++;
	}

}


void bubble_sort(void*base, int sz, int width, int(*cmp)(void*e1, void*e2))
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		int j = 0;
		for (j = 0; j < sz - i - 1; j++)
		{
			//判断是否要交换
			if (cmp((char*)base + j*width, (char*)base + (j + 1)*width)==1)
			{
			/*	int ret = cmp((char*)base + j*width, (char*)base + (j + 1)*width);
				printf("%d\n", ret);*/
				//测试cmp函数的返回值
				Swap((char*)base + j*width, (char*)base + (j + 1)*width, width);
				
			}

		}

	}
}

int main()
{
	int arr[] = { 2, 3, 4, 5, 6, 8, 7, 9 };
	//float arr[] = { 4.40 ,3.20,2.30,1.10,1.20 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz, sizeof(arr[0]), cmp);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}

//int main()
//{
//	float a = 1.1;
//	float b = 1.2;
//	float c = a - b;
//	printf("%f", c);
//
//
//	return 0;
//}