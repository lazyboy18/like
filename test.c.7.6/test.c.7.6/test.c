#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
//以下函数只适用与整形数组

//创建一个函数交换数组内容（数组一样大）
void Change(int*arr, int arr2[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{ 
		int tmp = 0;
		tmp = arr[i];
		arr[i] = arr2[i];
		arr2[i] = tmp;

	}
	
}

//创建init()函数是arr数组初始化为0;
void init(int*arr ,int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{

		arr[i] = 0;

	}

}


//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//   	init(arr,sz);
//
//
//	return 0;
//}


//创建一个print函数打印数组元素
void print(int*arr, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{

		printf("%d ", arr[i]);

	}
	printf("\n");
}

//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//
//	return 0;
//}

//创建一个reverse函数将数组内容倒置
//void reverse(int*arr, int sz)
void reverse(int arr[], int sz)
 {
	int i = 0;
	for (i = 0; &arr[i] < &arr[sz - 1 - i]; i++)
	{
		int tmp = 0;
		tmp = arr[i];
		arr[i] = arr[sz - 1 - i];
		arr[sz - 1 - i] = tmp;

	}

	/*for (i = 0; i < sz;i++)
	{
		printf("%d ", arr[i]);

	}
*/
	//由于我们希望函数的功能相对独立，所以将打印作用放到main函数


}

//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5 , 2 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	reverse(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//
//	}
//
//
//
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	reverse(arr, sz);
//	print(arr, sz);
//	init(arr, sz);
//	print(arr, sz);
//
//
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1, 2, 3, 4 };
//	int arr2[] = { 6, 7, 8, 9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Change(arr, arr2, sz);
//	print(arr, sz);
//	print(arr2, sz);
//
//	return 0;
//}
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5 };
//	short*p =arr;
//	//因为p指针已被转化为short*类型，其所指向的类型为short
//	//所以p+1跳动2个字节，每次访问一个字节
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		*(p + i) = 0;
//		
//	}
//	for (i = 0; i < 5; i++)
//	{
//
//		printf("%d\n", arr[i]);
//
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5 };
//	char*p = arr;
//	*(p + 1) = 1;
//	//p的类型已经转化为char*，故每次访问只访问一个字节
//	//arr[0]=00000001(十六进制)—>00000101
//	//所以arr[0]=1-->arr[0]=257
//	printf("%d\n", arr[0]);
//	printf("%d\n",*p);
//	printf("%d", arr[1]);
//	return 0;
//}

//int main()
//{  
//	int a = 2, b = 3, c = 3;
//	b = ++a;
//	c = a++;
//	b = a++, c++, ++c, ++a;
//	b += a++ + c;
//
//
//	printf("a=%d b=%d c=%d", a, b, c);
//
//
//	return 0;
//}



//求二进制数中1的个数的三种做法

//int my_count(unsigned int n)
////只要把n无符号化，那么-1即11111111111111111111111111111111也可以计算
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n = n / 2;
//	}
//	return count;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = my_count(n);
//	printf("ret=%d", ret);
//
//	return 0;
//}

//int my_count(int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//		{
//			count++;
//		}
//
//	}
//	return count;
//}

//int my_count(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n&(n - 1);
//		//每次运算都会使二进制位少一个1
//		count++;
//	}
//	return count;
//
//}
//int main()
//{
//
//	int n = 0;
//	scanf("%d", &n);
//	int ret = my_count(n);
//	printf("ret=%d", ret);
//
//	return 0;
//}

//求二进制位中不同位的个数
//
//int my_count(int n,int m)
//{
//
//	int h = 0;
//	h = n^m;
//	
//	//按位异或相同则为1，相异则为0；
//	int count = 0;
//	while (h)
//	{
//		h= h&(h- 1);
//		count++;
//	}
//	return count;
//
//}
//int main()
//{
//
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n ,&m);
//	int ret = my_count(n,m);
//	printf("ret=%d", ret);
//
//	return 0;
//}

//分别打印一个二进制数的奇数位与偶数位
//
//void printgg(int n)
//{
//	int i = 0;
//	printf("打印奇数位:\n");
//	for (i = 30; i >= 0; i-=2)
//	{
//		printf("%d ", ((n >> i) & 1));
//	}
//
//	printf("\n");
//	printf("打印偶数位\n");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", ((n >> i) & 1));
//
//	}
//
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printgg(n);
//
//
//	return 0;
//}

//打印乘法口诀表
//void print_table(n)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= n;i ++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-3d ", i, j, i*j);
//
//		}
//		printf("\n");
//
//	}
//
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print_table(n);
//	return 0;
//
//}


// 7/7/2022

//字符串逆序

//计算一个数的每一位之和

//用递归求n的k次方


//字符串逆序

int  my_strlen( char*arr )
{
	int count = 0;
	while (*arr++!='\0')
	{

		count++;
	

	}

	return count;

}



//循环式逆序
//void Order_change(char*arr, int len)
//{
//
//	char tmp = 0;
//	int i = 0;
//	while (&arr[i] < &arr[len - i - 1])
//	{
//		tmp = arr[i];
//		arr[i] = arr[len - 1 - i];
//		arr[len - i - 1] = tmp;
//		i++;
//
//	}
//
//}

//细细品读
//void reversegg(char*arr)
//{
//	int len = 0;
//	len = my_strlen(arr);
//	char tmp = 0;
//	tmp = *arr;
//	*arr = arr[len - 1];
//	arr[len - 1] = '\0';
//	if (my_strlen(arr+1) >= 2)
//	{
//		reversegg(arr+1);
//	}
//	arr[len - 1] = tmp;
//}
//

//int main()
//{
//	char arr[] = "abcdef";
//	//出错了，没有写出arr[]
//	printf("%s", arr);
//	//int len = 0;
//	//len=my_strlen(arr);
//	printf("\n");
//	//Order_change(arr,len);
//	reversegg(arr);
//	printf("%s", arr);
//
//
//	return 0;
//}
//

//计算一个数的每一位之和

//int adding(int n)
//{
//	if (n > 9)
//	{
//
//		return n % 10 + adding(n / 10);
//		//当n/10=0时，adding(0)没有放回值
//
//	}
//	else
//		return n;
//}
//
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int sum = adding(n);
//	printf("sum=%d", sum);
//
//	return 0;
//}

double multiple(int n, int k)
{
	if (k == 0)
		//注意等号是==
	{
		return 1;
	}
	else if (k >0)
	{
		return n*multiple(n, (k - 1));
	}
	else if (k < 0)
	{
		return 1.0 / multiple(n, -k);
	}

}



int main()
{
	int n = 0;
	int k = 0;
	scanf("%d%d", &n, &k);
	double ret = multiple(n, k);
	printf("ret=%lf", ret);

	return 0;
}