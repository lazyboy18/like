#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>
#include<assert.h>;
//�ַ�������
//����1

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
//	//���û�п���'\0'���³��������û�д�ӡ
//	reverse(a, sz);
//		printf("%s\n", a);
//	return 0;
//}

//����2
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
//	//���û�п���'\0'���³��������û�д�ӡ
//	reverse(a, sz);
//	printf("%s\n", a);
//	return 0;
//}

//����3

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
//	reverse(arr);//Ҫ�ó�����ָ��
//	printf("%s\n", arr);
//	return 0;
//}

//�㷨�⣺��2+22+222+2222+.......

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
//		//����ѱ������ڵȺ��ұߣ�OK?
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
//	printf("ǰn���Ϊ��%d", ret);
//	return 0;
//}

//�ܹ��õݹ���������һ�㶼����ѭ������������������
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

//ˮ�ɻ���
//#include<math.h>
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 10000; i++)
//	{
//		//�ֲ������
//		//1.�ж�λ��
//		//2.��λ��֮��sum
//		//3.�Ƚ�sum��i
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


//��ӡ����

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	//�ȴ�ӡ�ϲ��֣��ٴ�ӡ�°벿��
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

//����ˮ
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
//	//�������㣺�����������߶��������޷��õ���������������Ҫǿ������ת��
//	printf("�����ϴ�����%-5d  ", drink_count);
//	printf("����һ��Ǯ��ȼ�ƿ:%-4d ",drink_count - last);
//	printf("�ȴ���Ǯ֮��:%.3lf\n", per);
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

//�ַ���

//̽��strcpy

//char* my_strcpy( char*arr1,const char*arr2)
////���ִ����ԭ��
////1.arr2���øı䣬��const����
////2.������ַarr1��arr2����Ϊ��ָ�룬��assert����
////3.ѭ�����ʽ���
////4.����ָ��
////5.ʹ����ʱ����
//{
//	assert(arr1 != NULL);//����arr1��arr2Ϊ��ָ��
//	assert(arr2 != NULL);
//	/*while (*arr1!= '\0')
//	{
//		*arr1 = *arr2;
//		arr1++;
//		arr2++;
//	}*/
//	//�޸ķ���1
//	/*while (*arr2!= '\0')
//	{
//	*arr1 = *arr2;
//	arr1++;
//	arr2++;
//	}
//	*arr1 = *arr2;*/
//    //�޸ķ���2
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
//	//strcpy,���������������\0
//    //��������Ĵ�С������ڱ���������
//	//�����ζ��������޸�
//	//����ʾ��
//	//char*p-"abcd"  �����ַ������ܱ��ı�
//	printf("%s\n", arr1);
//	return 0;
//}

//̽��strcat

//int main()
//{
//	char arr1[20] = "hello\0xxxxxx";
//	char arr2[] = " world";
//	strcat(arr1, arr2);
//	//Դ�ַ����ӱ����ζ����\0��ʼ׷�ӣ��Լ���\0Ҳ�ᱻ׷����ȥ
//	//�����ζ�������㹻��
//	//�ַ���������׷���Լ�
//	printf("%s\n", arr1);
//	return 0;
//}

//my_strcat��ʵ��
char* my_strcat(char*dest, const char*src, int sz)//src���ܱ��ı�
{

	assert(dest!=NULL);//����dest��srcΪ��ָ��
	assert(src!=NULL);
	char*ret = dest;
	//�ҵ�Ŀ���ַ�����'\0'
	dest=dest + sz;//ʹdest�ĵ�ַ��'\0'��ʼ	
	//����ʾ��
	//dest+sz; û�и�ֵ
	//����
	/*while (*dest++)
	{
		;
	}*/
	while (*dest++ = *src++)//��*src='\0'ʱ��ASCI��ֵΪ0��ѭ��ֹͣ
	{
		;
	}
	return ret;//����dest���׵�ַ

}

int main()
{

	char arr1[30] = "I am a ";
	char arr2[] = "good boy!";
	int sz = strlen(arr1);//��û��ǲ�Ҫ���ÿ�����
	//�ں����ڲ���ѭ���ҵ�\0
	my_strcat(arr1, arr2,sz);
	printf("%s\n", arr1);

	return 0;
}
















//int main()
//{
//	//size_t strlen(const char*arr)
//	//����ֵΪ�޷�����
//	if (strlen("abc") - strlen("abcdef") > 0)
//	{
//		//����ֵ-3Ϊ�޷������������ڴ��д油�룬ת��Ϊһ���ϴ������
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
