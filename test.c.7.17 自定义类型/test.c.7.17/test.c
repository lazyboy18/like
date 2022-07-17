#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
//结构体类型
//struct stu {
//	char name[20];
//	char tele[20];
//	char sex[10];
//	int age;
//}s4 ,s5 ,s6;
//
//struct stu s3;
//	//s3s4s5s6s是全局变量
//struct {
//	char name[20];
//	char tele[20];
//	char sex[10];
//	int age;
//}s7;//匿名结构体类型
//struct {
//	char name[20];
//	char tele[20];
//	char sex[10];
//	int age;
//}*ps7;//匿名结构体指针类型
//
//
//int main()
//{
//		struct stu s1;//局部变量
//		return 0;
//}

//struct Node
//{
//
//	int date;
//	struct Node n;
//};//写法错误 
//struct Node  //<--数据域
//{
//	int date;
//	struct Node*nest;   //<--地址域
//};//链表存储   结构体的自引用  
//typedef struct Node
//{
//
//	int date;
//	struct Node*nest;
//}Node;
//
//
//int main()
//{
//
//	sizeof(struct Node);
//	return 0;
//}

//结构体在引用结构体时，定义要双括号，应用时用双.号

//结构体内存对齐
//struct S1
//{
//	char a;
//	char b;
//	int c;
//};
//struct S2
//{	
//	char b;
//	int c;
//	char a;
//};
//int main()
//{
//	struct S1 s1 = { 'a', 'b', 1 };
//	//内存内容
//	//0x00DDFB30  61 62 cc cc   
//	//0x00DDFB34  01 00 00 00
//	//8个字节
//	struct S2 s2 = { 'b', 1, 'a' };
//	//内存内容
//	//0x00EFFBA0  62 cc cc cc  
//	//0x00EFFBA4  01 00 00 00  
//	//0x00EFFBA8  61 cc cc cc
//	//12个字节
//	return 0;
//}

//位段

struct S{
	int a : 2;//a只需要2个比特位
	int b : 5;//b只需要5个比特位
	int c : 10;//c只需要10个比特位
	int d : 30;//d只需要30个比特位
};



int main()
{
	struct S s;
	printf("%d\n", sizeof(s));


	return 0;
}