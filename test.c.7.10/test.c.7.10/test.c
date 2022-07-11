#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>

//数据存储的学习的测试


//例一
//int main()
//{
//	int n = 9;
    //00000000 00000000 00000000 00001001
//	float*p = (float*)&n;
//   0    0000000 000000000000000000001001
//   S=0  E=0-127=-127  M= 000000000000000000001001
//    (-1)^(0)*(0.00000000000000000001001)*(2)^(-126)=0.000000
//	printf("%d %f\n", n, *p);
//                	//9   0.000000
//	*p = 9.0;
//   1001.0->1.001*2^(3)->(-1)^(0)*(1.001)*2^(3)
// so  S=0 E=130 M=001000000000000000000000
// 内存存储形式: 01000001000100000000000000000000->%d 1091567616 %f9.000000 
//	printf("%d  %f\n", n, *p);
//          	//1091567616  9.000000 
//	//说明整型与浮点型的存储方式不一样
//	return 0;
//}

//字符指针
//int main()
//{
//	  const char*p = "abcdef";
//	  //p所指向的内容不可改变
//	//"abcdef"是常量字符串，a的地址赋给了p
//	//常量字符串里面的内容不能改变
//	printf("%c\n", *p);
//	printf("%s\n", p);
//
//	return 0;
//}

//经典面试题

//int main()
//{
//	char arr1 = "abcdef";
//	char arr2 = "abcdef";
//	const char*p1 = "abcdef";//常量字符串，它的地址与内容无法修改
//	const char*p2 = "abcdef";
//	if (arr1 == arr2)
//		//由于数组名等于首元素地址所以arr1不等于arr2
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//
//	if (p1== p2)
//		//由p1与p2存储的都是常量字符串中a的地址
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}

//指针数组

//int main()
//{
////	char*ptr[5];--存放字符指针的数组--指针数组
////  int*ptcc[4];--存放整型指针的数组--指针数组
//	return 0;
//}

//指针数组的封装应用
//
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4 };
//	int arr2[] = { 2, 3, 4, 5 };
//	int arr3[] = { 3, 4, 5, 6 };
//	int*prcc[] = { arr1, arr2, arr3 };
//	//prcc是一个存放整型指针的数组，存放的指针有arr1即arr1数组首元素的地址，
//	//arr2即arr2数组首元素的地址，arr3即arr3数组首元素的地址。
//	//通过prcc可以找到上述数组中的每一个元素，相当于prcc封装了上述数组
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", *(prcc[i] + j));
//
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//数组指针--指向数组的指针--存放数组的地址
//
//int main()
//{
//	//int arr[10] = { 0 };
//	//arr--首元素的地址
//	//&arr[0]--也是首元素的地址
//	//&arr--数组的地址
//
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	//int*p[10]; 由于[]的结合性比*强，所以p先与[]结合，所以这是一个数组
//	int(*p)[10]=&arr;
//	//由于()的优先级比[]高所以(*p)表示一个指针，而且指向int与[]，说明这是一个整型数组指针
//
//
//	return 0;
//}

//int main()
//{
//	char*arr[5];
//	//arr有5个元素，类型是char*--存放字符指针的数组
//	char*(*pa)[5] = &arr;
//	//(*pa)表示这是一个指针，char*与[5]表示该指针指向一个有5个类型为char*元素的数组
//
//
//
//	return 0;
//}

//数组指针的使用
 
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int(*p)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", (*p)[i]);
          //(*p)表示arr数组的地址，而该地址与其首元素的地址相同
//	}
//	printf("\n");
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(*p+i));
          //(*p)可以表示首元素的地址，(*p+1)表示第二个元素的地址，*(*p)表示访问首元素的地址，结果为1
//	}
//
//	return 0;
//}

//太挫了

//int main()
//{
//	int arr[5] = { 1, 2, 3, 4, 5 };
//	int(*p)[5] = &arr;
//	//p是指针，指向一个有5个类型为整型的元素的数组
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", (*p)[i]);
//		printf("%d ", arr[i]);
//		printf("%d ", *(arr+i));
//		printf("%d ", *(*p+i));
//		printf("\n");
//		//四种打印方式的结果都相同
//	}
//	//*p==arr     arr[i]==(*p)[i]==*(arr+i)==*(*p+i)
//	//要知道，上述arr的形式不一样，但是内涵都是一样的
//	return 0;
//}

//数组指针的真正用武之地--二维数组
//重要例题
//my view:很多人可能会疑惑，既然在二维数组中第一行数组的地址
//与第一行数组中的首元素的地址的数值相同，那为什么不能通过对
//arr解引用得到第一行的首元素呢？为什么一维数组就可以呢？
//我觉得，在一维数组中arr+1是可以代表第二个元素的地址的，
//所以对arr解引用可以直接得到首元素，而在二维数组中
//arr+1的意义是跳到二维数组中的第二行数组的地址，
//问题就在这里了。如果arr可以代表第一行数组中的首元素，
//那么arr+1就可以代表第一行数组中的第二个元素的地址了，
//那么这不就与arr+1能代表第二行数组的地址冲突了吗？
//单凭这一点，我就觉得c语言在设计时就绝不会允许这种模棱两可的情况存在。
//综上所述，在二维数组中，arr代表第一行数组的地址，虽然其数值与其首元素的地址相同，
//但在实质上唯有*arr才代表第一行数组中的首元素地址

//指针[i] 表示以指针当前位置为起点，向后跳过i个该指针所指类型的大小的空间。
//arr[i]==*(arr+i)  ----重要关系式

//void print(int(*p)[4],int x,int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{   
//			printf("%d ", *(p[i]+j));
//			printf("%d ", p[i][j]);
//			printf("%d ", *(*(p + i) + j));
//	     	printf("%d ",  (*(p + i))[j]);//如果不加()，由于[]的优先级比*高会出错
//			//p与arr都能代表二维数组中第一行数组的地址
//			//*p与*arr都能代表第一行数组中首元素的地址
//			//p+1==arr+1,意思是跳过第一行数组到第二行数组
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
//	int arr[3][4] = { { 1, 2, 3, 4 }, { 2, 3, 4, 5 }, { 3, 4, 5, 6 } };
//	//这里用指针访问二维数组的形式打印二维数组中的元素，先定义它的指针
//	int(*p)[3][4] = &arr;//p==arr
////	printf("%p\n", arr);
//	//arr的打印结果与*arr一样，这足以说明arr是第一行数组的地址，而*arr是得到第一行数组的首元素地址
////	printf("%p\n", arr);
////	printf("%p\n", p);//00CFFE6C,对arr的打印结果是一个地址与p相同,故p==arr;
////	printf("%d\n", *arr);
//	//结果不是1，说明这不是首元素的地址，只是二维数组中第一行数组的地址，
//	//此时它的地址与它的首地址在数值上相同，但是对它进行解引用不能得到首元素
////	printf("%d\n", **arr);
//	//打印结果为1，说明*arr是得到第一行首元素的地址
//	//arr代表二维数组中的第一行数组的地址，所以
//	//p是一个指针，其指向的是在二维数组中的第一行数组，第一行数组有4个元素，元素的类型为整型
//	print(arr, 3, 4);
//	//int i = 0;
//	//int j = 0;
//	//for (i = 0; i < 3; i++)
//	//{
//	//	for (j = 0; j < 4; j++)
//	//	{
//	//		printf("%d ",arr[i][j]);
//	//	}
//	//	printf("\n");
//	//}
//	////arr[i]表示从第i+1行开始检索元素，即从第一行首元素开始
//	//for (i = 0; i < 3; i++)
//	//{
//	//	for (j = 0; j < 4; j++)
//	//	{
//	//		printf("%d ", p[i][j]);
//	//	}
//	//	printf("\n");
//	//}
//
//
//
//
//	return 0;
//}

//研究二维数组的地址排序

//int main()
//{
//	int arr[3][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
//	int(*p)[3][3] = &arr;
//	//   p==arr?
//	//arr代表二维数组的第一行数组的地址
//	printf("%p\n", arr);//0116FAB0
//	printf("%p\n", &arr[0][0]);//0116FABO
//	printf("%p\n", arr + 1);//0116FABC
//	//研究这两个地址的差值可知，arr是二维数组的第一行数组的地址，而非其首元素地址而已
//	//可见二维数组的内存地址在排序时可以理解为第一行数组接着第二行数组直到最后一行数组依次排序
//	//可以理解为一行又一行一维数组的依次相连
//	return 0;
//}

//测试

//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int*p = arr;
//	int i = 0;
//	for (i = 0; i <10; i++)
//	{
////		printf("%d ", arr[i]);
////		printf("%d ", p[i]);
////		printf("%d ", *(p + i));
////		printf("%d ", *(arr + i));
//		//+的优先级比*高
//		//arr==p
//		//arr[i]==p[i]==(*p+i)
//	}
//
//	return 0;
//}

//习题
//问int(*ps[3])[4]是什么？ 
//分析:由于[]的优先级比*高，所以ps先与[]结合，说明ps是个数组，数组的元素为3
//去掉ps[3]，剩下的是数组类型int(*)[4],由于*在()里面，所以数组类型是指针
//而且该指针指向一个有4个整型元素的数组，所以ps[3]的数组类型是一个有4个整型元素的数组指针

//概念
//一维数组的传参
//一维数组在传参的时候，参数可以相应指针（如果传来的是非指针，则用一级指针接收），
//如果传来的是一级指针，则用二级指针来接收。参数也可以是数组，数组大小可以省略

//二维数组的传参
//二维数组在传参的时候，行可以省略，列不能够省略，也可以传指针

//指针传参
//指针传参是只要用相应的指针来接收就可以了，int*p=arr->int*p
//有void test(int*p)，问该函数能够接收什么样的参数
//int a=0; int*p=&a;&a与p都能传，接收一个地址或一个一级指针
//有void test(int**p),问该函数能够接收什么样的参数
//int a=10; int*p=&a; int**pp=&p;    ----&p与pp都能传，接收一级指针的地址或二级指针
//int*arr[5]; arr也可以传参过去给void test(int**p)

//函数指针
//&函数名与函数名都是函数的地址
//int add(int x,int y)->  int(*pa)(int,int);

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 20;
//	int b = 10;
//	 Add(a, b);
//	 printf("%d\n", Add(a, b));
//	 printf("%p\n", &Add);
//	 //创建一个函数指针变量pa
//	 int(*pa)(int, int) = Add;
////	 int             (*pa)         (int, int)     =    Add;
////  函数的放回类型  指针标识      函数的参数类型      函数的地址
//	 printf("%d\n", (*pa)(3, 2));//5
//	return 0;
//}

void Print(char*a)
{
	printf("%s", a);

}


int main()
{
//	char*p = "hello world";
//	Print();
	void(*p)() = Print;
	(*p)("hello world");
	//字符串实际上是指向字符序列中第一个字符的指针
       //传字符串，默认传字符串第一个元素的地址
	return 0;
}