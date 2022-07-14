#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>
#include<assert.h>;
//字符串逆序
//样板1

//void reverse(char*a, int sz)
//{
//	int i = 0;
//	for (i = 0; i <= (sz-1)/2; i++)
//	{
//		char*tmp = a[i];
//		a[i]=a[sz - i - 1];
//		a[sz - i - 1] = tmp;        
//	}
//}
//
//int main()
//{
//	char a[] = "abcdef";
//	printf("%s\n", a);
//	int sz = (sizeof(a) / sizeof(a[0]))-1;
//	//最初没有考虑'\0'导致出错，逆序后没有打印
//	reverse(a, sz);
//		printf("%s\n", a);
//	return 0;
//}

//样板2
//void reverse(char*a, int sz)
//{
//	int i = 0;
//	for (i = 0; i <= (sz - 1) / 2; i++)
//	{
//		char*tmp = a[i];
//		a[i] = a[sz - i - 1];
//		a[sz - i - 1] = tmp;
//	}
//}
//
//int main()
//{
//	char a[256] = { 0 };
//	scanf("%s", a);
//	printf("%s\n", a);
//	int sz = strlen(a);
//	//最初没有考虑'\0'导致出错，逆序后没有打印
//	reverse(a, sz);
//	printf("%s\n", a);
//	return 0;
//}

//样板3

//void reverse(char*arr)
//{
//	assert(arr);
//	int len = strlen(arr);
//	char*left = arr;
//	char*right = arr + len - 1;
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//
//}
//
//int main()
//{
//	char arr[256] = { 0 };
//	//scanf("%s", arr);
//	gets(arr);
//	reverse(arr);//要擅长利用指针
//	printf("%s\n", arr);
//	return 0;
//}

//算法题：求2+22+222+2222+.......

//long long int single(n,a)
//{
//	if (n == 1)
//	{
//		return a;
//	}
//	if (n >= 2)
//	{
//		long long int sum = a;
//		long long int h = a;
//		int i = 0;
//		for (i = 2; i <= n; i++)
//		{
//			h = h * 10;
//			sum = sum + h;
//		}
//		return sum;
//	}
//}
//
//long long int sum(n,a)
//{
//	if (0==n)
//		//叫你把变量放在等号右边，OK?
//	{
//		return 0;
//	}
//	if (n >= 1)
//	{
//		return sum(n - 1,a) + single(n,a);
//	}
//
//}
//
//int main()
//{
//	int n = 0;
//	int a = 0;
//	scanf("%d%d",&a, &n);
//	long long int ret = sum(n,a);
//	printf("前n项和为：%d", ret);
//	return 0;
//}

//能够用递归解决的问题一般都能用循环解决，多设变量即可
//int main()
//{
//	int n = 0;
//	int a = 0;
//	scanf("%d%d", &a, &n);
//	int ret = 0;
//	int i = 0;
//	int sum = 0;
//	for (i = 0; i < n; i++)
//	{
//		ret = ret * 10 + a;
//		sum += ret;
//	}
//	printf("sum=%d", sum);
//	return 0;
//}

//水仙花数
//#include<math.h>
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 10000; i++)
//	{
//		//分步骤完成
//		//1.判断位数
//		//2.求位数之和sum
//		//3.比较sum与i
//		int n = 1;
//		int tmp = i;
//		while (tmp/=10)
//		{
//			n++;
//		}
//		int sum = 0;
//		tmp = i;
//		while (tmp )
//		{
//			sum += pow(tmp % 10, n);
//			tmp /= 10;
//
//		}
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//打印棱形

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	//先打印上部分，再打印下半部分
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j < n - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	for (i = 0; i < n - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j <2*n - 3 - 2 * i; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//
//	}
//	return 0;
//}

//喝汽水
//int main()
//{
//	int max = 0;
//	int last = 0;
//	int money = 0;
//	double per = 0.0;
//	//scanf("%d", &money);	
//	for (money = 40000; money <= 100000; money++)
//	{
//		int tmp = money;
//		printf("money:%-7d  ", money);
//		int drink_count = 0;
//		int void_bottle = 0;	
//	while (money)
//	{
//		drink_count += money;
//		void_bottle = money;
//		money = 0;
//		while (void_bottle >= 2)
//		{
//			money++;
//			void_bottle -= 2;
//
//		}
//	}
//
//	money = tmp;
//	per = (double)drink_count / money;
//	//新手亮点：由于左右两边都是整型无法得到浮点数，所以需要强制类型转化
//	printf("喝饮料次数：%-5d  ", drink_count);
//	printf("增加一块钱多喝几瓶:%-4d ",drink_count - last);
//	printf("喝次与钱之比:%.3lf\n", per);
//	int new = drink_count - last;
//	if (money > 40000)
//	{
//		if (new > max)
//		{
//			max = new;
//		}
//	}
//	last = drink_count;
//}
//	printf("max=%d\n", max);
//	return 0;
//}

//字符串

//探究strcpy

//char* my_strcpy( char*arr1,const char*arr2)
////满分代码的原因
////1.arr2不用改变，用const修饰
////2.两个地址arr1与arr2不能为空指针，用assert修饰
////3.循环表达式简洁
////4.返回指针
////5.使用临时变量
//{
//	assert(arr1 != NULL);//避免arr1或arr2为空指针
//	assert(arr2 != NULL);
//	/*while (*arr1!= '\0')
//	{
//		*arr1 = *arr2;
//		arr1++;
//		arr2++;
//	}*/
//	//修改方案1
//	/*while (*arr2!= '\0')
//	{
//	*arr1 = *arr2;
//	arr1++;
//	arr2++;
//	}
//	*arr1 = *arr2;*/
//    //修改方案2
//	char*tmp = arr1;
//	while (*arr1++ = *arr2++)
//	{
//		;
//	}
//	return tmp;
//}
//
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	//strcpy,被拷贝对象必须有\0
//    //拷贝数组的大小必须大于被拷贝数组
//	//被修饰对象必须可修改
//	//错误示范
//	//char*p-"abcd"  常量字符串不能被改变
//	printf("%s\n", arr1);
//	return 0;
//}

//探究strcat

//int main()
//{
//	char arr1[20] = "hello\0xxxxxx";
//	char arr2[] = " world";
//	strcat(arr1, arr2);
//	//源字符串从被修饰对象的\0开始追加，自己的\0也会被追加上去
//	//被修饰对象必须足够大
//	//字符串自身不能追加自己
//	printf("%s\n", arr1);
//	return 0;
//}

//my_strcat的实现
char* my_strcat(char*dest, const char*src, int sz)//src不能被改变
{

	assert(dest!=NULL);//避免dest与src为空指针
	assert(src!=NULL);
	char*ret = dest;
	//找到目的字符串的'\0'
	dest=dest + sz;//使dest的地址从'\0'开始	
	//错误示范
	//dest+sz; 没有赋值
	//改造
	/*while (*dest++)
	{
		;
	}*/
	while (*dest++ = *src++)//当*src='\0'时，ASCI码值为0，循环停止
	{
		;
	}
	return ret;//返回dest的首地址

}

int main()
{

	char arr1[30] = "I am a ";
	char arr2[] = "good boy!";
	int sz = strlen(arr1);//最好还是不要调用库行数
	//在函数内部用循环找到\0
	my_strcat(arr1, arr2,sz);
	printf("%s\n", arr1);

	return 0;
}
















//int main()
//{
//	//size_t strlen(const char*arr)
//	//返回值为无符号数
//	if (strlen("abc") - strlen("abcdef") > 0)
//	{
//		//返回值-3为无符号数，在能内存中存补码，转化为一个较大的整数
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//
//	//size_t==unsighed int 
//
//
//
//	return 0;
//}
