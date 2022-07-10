#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>

//void test(void)
//{
//	printf("hehe\n");
//}
//int main()
//{
//	test(100);
//	//此处传参不影响test(void)
//	return 0;
//}

//判断大小端存储方式
//int main()
//{
//	int a = 1;
//	char*p = (char*)&a;
//	//(char*)使a的类型转化
//	//char*p指针在解引用时只访问一个字节的内容
//	/*if (*p > *(p + 3))
//		printf("小端存储\n");
//	else
//		printf("大端存储\n");*/
//	if (*p==1)
//		printf("小端存储\n");
//	else
//		printf("大端存储\n");
//
//	return 0;
//}

//函数模式

//int check_sys()
//{
//	int a = 1;
//	return *(char*)&a;
//}
//
//int main()
//{
//
//	//如果是大端存储则返回0;
//	//如果是小端存储则返回1;
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//		printf("大端\n");
//	return 0;
//}


//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	//11111111-c
//	//无符号数，源反补相同
//	//00000000000000000000000011111111-补码
//	//255	
//	printf("a=%u b=%d c=%u", a,b,c);
//	return 0;
//}

//int main()
//{
////    char a = -128;
//	//10000000-a在内存中的存储
//	//a是有符号类型数据，整型提升后，见下
//	//111111111111111111111111100000000-补码,也是a整型提升后在内存中的存储形式
//	//111111111111111111111111011111111-反码
//	//100000000000000000000000100000000-源码
//    printf("%d %u",a,a);

//	//结果-128
//	//打印无符号数时
//	// 
////	printf("%d %u\n", a, a);
////	unsigned char b = -128;
////	printf("%d %u\n", b, b);
//     //  -128 的char类型存储形式
//	//10000000
//	//运算时整形提升
//	//打印成有符号的整形时:
//	//00000000000000000000000010000000--补码
//	//00000000000000000000000001111111--反码
//	//00000000000000000000000010000000-原码
//	//结果-128
//    //00000000000000000000000010000000--三码相同
//	//128 128
//
//
//
////	unsigned char c = -127;
////	printf("%d %u\n", c,c);
//	//10000001-c在内存中的存储形式
//	//整形提升后
//	//00000000000000000000000010000001--补码
//	//00000000000000000000000010000000--反码
//	//01111111111111111111111101111111--原码 
//
//
//
//
//
//
//
////	char a = 4;
////	unsigned char b = -127;
////	unsigned char c = a + b;
////	printf("%d %d %d %u %u %u", a, b, c, a, b, c);
//	//4 129 133 4 129 133
//	//00000100--a
//	//10000001--b在内存中的存储形式
//	//a与b运算时整型提升
//	//00000000000000000000000000000100--a的三码相同
//	//00000000000000000000000010000001--b的三码相同
//	//00000000000000000000000010000101--c的最终结果
//	//133
////	int a = -20;
////	unsigned int j = 10;
////	printf("%d", a + j);
//    //10000000000000000000000000100100--a的源码
//	//11111111111111111111111111011011--a的反码
//	//11111111111111111111111111011100--a的补码
//	//00000000000000000000000000001010--j的三码相同
//	//a与j相加等于
//	//11111111111111111111111111100000
//	//00000000000000000000000000001000
//	//最终结果为
//	//11111111111111111111111111101000--补码
//	//11111111111111111111111111100111--反码
//	//10000000000000000000000000011000--源码
//    //结果为-10；
//	
//
//	//10000000000000000000000000000001
//	//
////	unsigned int i = -1;
//	//数据在存储时用补码
//	//11111111111111111111111111111111-- -1的补码
//	//在unsigned int 看来i是一个无符号数，三码相同，最终打印一个正数
//
////	printf("%u", i);
//	//%u是打印无符号二进制，最终打印一个正数
////	printf("%u", i);
//	//%d是打印有符号二级制，在他看来11111111111111111111111111111111是补码，转为源码后打印结果是-1
//
//
//	//01111111
//
//
//	//int b = 127;
//	//1111111111111111111111111111111111111111111111111111111101111111--  -129的补码
//	//1111111111111111111111111111111111111111111111111111111101111110--反码
//	//1000000000000000000000000000000000000000000000000000000010000001--源码
//   //截断--截补码
//	//01111111--127
//	
//	//printf("%d", b);
//
//
//	/*char a[1000];
//	int i = 0;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a));*/
//	return 0;
//}
//
//int main()
//{
//	unsigned char a =-1;
//	printf("%d %u", a, a);
//	//答案：  255   255
//	return 0;
//}
////11111111--  -1在unsigned char中的存储形式
////整型提升后，见下
////00000000000000000000000011111111--整型提升后无符号数三码相同，所以无符号数的两种打印格式的结果相同

//int main()
//{
//	char a = 32;
//	//10000000-a在内存中的存储
//	//a是有符号类型数据，整型提升后，见下
//	//111111111111111111111111100000000-补码,也是a整型提升后在内存中的存储形式
//	//111111111111111111111111011111111-反码
//	//100000000000000000000000100000000-源码
//	    printf("%d %u",a,a);
////      答案： -128  4294967168
//		//可见由于a在char数值范围内的%d打印结果是其本身，即-128->127
//	return 0;
//}

int main()
{
	int i;
	char a[1000];
	for (i = 0; i < 1000; i++)
	{

		a[i] = -1 - i;
	}
	//printf("c=%d", strlen(a));
	//求c的值
//数组a的元素是char类型，每一个元素占一个字节
//i:0->999时,a的元素:-1 ->-1000;
//看到这里，大家是不是觉得答案就是1000呢？错了，听我开讲。
//我们知道i从0到127时，a[i]的值都是其本身，可是从a[128]=-129开始，你们看看它们的结果
	printf("a[128]=%d a[129]=%d a[254]=%d  a[255]=%d   a[256]=%d", a[128], a[129], a[254], a[255] , a[256]);
//    a[128]=127 a[129]=126 a[254]=1  a[255]=0   a[256]=-1
//看到没，i从128到256时，a[i]的结果居然循环了
//而strlen函数是用于打印字符串长度的，一旦碰到'\0'便会停止打印(所打印的长度不包括'\0')，而'\0'的ASII码值为0，
//所以strlen打印字符串一直到a[255]=0,所以答案结果为c=255;
	return 0;
}