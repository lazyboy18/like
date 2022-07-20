#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

//动态内存分配--堆区

struct S
{
	char name[20];
	int age;

};

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	struct S arr[n];
//	return 0;
//}
//数组不能使用变量

#include<string.h>
#include<errno.h>
//int main()
//{
//	//mollac 
//	//向内存申请10个整型空间
//	int *p = (int*)malloc(10*sizeof(int));
//	//动态内存开辟
//	if (p == NULL)
//	{
//		//打印错误原因的一个方式
//		printf("%s\n", strerror(errno));
//
//	}
//	else
//	{
//		//正常使用空间
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			p[i]= i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
////当空间不再使用应该交换空间
//	free(p);//即使释放了p的空间，但p依旧记住原先的地址
//	//p容易变成野指针，为了避免野指针，将p空置
//	p = NULL;
//	return 0;
//} 

//int main()
//{
//	//malloc(10*sizeof(int));
//	//int *p = (int*)calloc(10, sizeof(int));//初始化内存空间内容为0;
//	//if (p == NULL)
//	//{
//	//	printf("%s\n", strerror(errno));
//	//}
//	//else
//	//{
//	//	int i = 0;
//	//	for (i = 0; i < 10; i++)
//	//	{
//	//		printf("%d ", *(p + i));
//	//	}
//	//}
//	//realloc调整动态内存开辟的大小
//	int*p=(int*)malloc(20);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 5; i++)
//		{
//			*(p + i) = i;
//		}
//	}
	////只是在使用malloc开辟的20个字节的空间
	////假设这里，20个字节不能满足我们的要求
	////我们希望能够有40个字节的空间
	////这里就可以使用realloc来调整
	////int*p2=realloc(p, 40);
	////调整空间不变，保留原来数据
	////危险语法:p=realloc(p, 40); 引起非法访问
	////realloc的语法规范:
	////1.如果原p所指向的空间后面有充足空间则追加后返回原地址，
	////2.否则另外开辟空间，返回新地址，拷贝原数据，释放旧的内存空间
	////3.如果追加内容过大，那么p会自动销毁被赋值为空指针
	////所以要用新的变量来接收
//	if (p2 != NULL)
//	{
//		p = p2;
//		int i = 0;
//		for (i = 5; i < 10; i++)
//		{
//			*(p2 + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p2 + i));
//		}
//	}
//	//释放内存
//	free(p);
//	p = NULL;
//	return 0;
//}

//1.在使用mollac calloc realloc切记判断是否返回空指针
//2.也要避免动态内存的越界访问
//3.对非动态内存使用free
//4.使用free释放动态内存的一部分
//5.对同一块动态内存的多次释放
//6.动态开辟内存忘记释放

//int main()
//{
//	int*p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//			//*p++ = i;
//			//p地址已经自增了
//		}
//			free(p);//p自增了，已经不是原来的地址了
//			//free(p);
//			p == NULL;
//	}
//	return 0;
//}

#include<windows.h>
//
//int main()
//{
//	while (1)
//	{	
//		malloc(1);
//		Sleep(1000);
//	}
//
//	return 0;
//}
//错误代码
//void GetMemory(char*p)
//{
//	//printf("%p", p); NULL
//	//p是str的一份临时拷贝
//	p = (char*)malloc(100);
//	//p指向一个刚开辟的字节大小为100的空间的首地址
//	//由于p是形参，str本身没有被改变
//	//函数退出后，p被销毁了，当时它所指向的空间没有被销毁，
//	//程序出现内存泄露的问题
//}
//void Test(void)
//{
//	char*str = NULL;//str是一个指针，被赋值成为NULL
//	GetMemory(str);//传str本身过去相当于传值，NULL本身不能被改变
//	strcpy(str, "hello world\n");//str依旧为空指针
//	printf(str);//无打印
//}
//int main()
//{
//	Test();
//	return 0;
//}
//改进方法

//void GetMemory(char**p)//&str是一级指针的地址，用二级指针来接收
//{
//	//p指向str
//	*p = (char*)malloc(100);
//	//通过*p得到str，在将新开辟的字节大小为100的动态内存空间的地址赋值给它
//}
//void Test(void)
//{
//	char*str = NULL;
//	GetMemory(&str);//传过去str的地址，意味着可以通过解引用修改str的内容
//	strcpy(str, "hello world\n");//str的地址已经被改变
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}

//char* GetMemory(char**p)//&str是一级指针的地址，用二级指针来接收
//{
//	
//	p = (char*)malloc(100);
//	return p;
//}
//void Test(void)
//{
//	char*str = NULL;
//	str=GetMemory(str);
//	strcpy(str, "hello world\n");
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}

int main()
{
	int*p = (int*)malloc(20);
	*p = 10;
	int*p2 = realloc(p, 4000);
	p = p2;
	return 0;
}