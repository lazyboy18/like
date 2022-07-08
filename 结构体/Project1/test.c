#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
//结构体的声明
//结构体关键字(struct)+可选标记名+花括号{ 成员数据类型+成员名  };
//struct student
//{
//	char name[10];//声明姓名
//	int age;//声明年龄
//	char id[20];//声明学号
//
//};
//
//int main()
//{
//
//	struct student stu = { "张三", 18, "19990722" };
//	//结构体类型+结构体变量名+=+花括号{   各成员数据  };
//	//各成员数据之间用,隔开
//	//结构体定义各成员数据的顺序应与声明时一致
//
//	printf("%s %d %s", stu.name, stu.age, stu.id);
//	//结构体变量名.成员名
//	//相当于打印字符串，整形数据，字符串
//
//	return 0;
//}
//
//typedef struct student
//{
//	char name[10];//声明姓名
//	int age;//声明年龄
//	char id[20];//声明学号
//
//}stu;
//
//int main()
//{
//	 stu s1= { "张三", 18, "19990722" };
//	 stu*ps = &s1;
//	 //定义了一个所指向类型为结构体类型的指针ps
//	 printf("%s %d %s", ps->name, ps->age, ps->name);
//	 //指针加->成员名即可
//	 //ps->name相当于利用指针访问结构体中的name数据
//	return 0;
//}

//typedef struct more_information
//{
//	char hobby[20];
//	char favorite_food[10];
//
//}mi;
//
//typedef struct student
//{
//	char name[10];//声明姓名
//	int age;//声明年龄
//	char id[20];//声明学号
//	mi m1;
//	//stu内部有结构体时，应写上此结构体类型加上结构体变量名
//}stu;
//
//int main()
//{
//	
//	stu s1 = { "张三", 18, "19990722", { "篮球", "牛肉" } };
//	printf("%s %d %s %s %s", s1.name, s1.age, s1.id, s1.m1.hobby, s1.m1.favorite_food);
//	//访问结构体中的结构体的数据时用   一级结构体变量1名.二级结构体变量名.成员名
//	//三级依次类推
//	stu*ps = &s1;
//	printf("\n");
//	printf("%s %d %s %s %s",ps->name, ps->age, ps->id, ps->m1.hobby, ps->m1.favorite_food);
//	//用一级结构体的指针访问其内容中的二级结构体加 . 成员名
//	return 0;
//}

//
//typedef struct student
//{
//	char name[10];//声明姓名
//	int age;//声明年龄
//	char id[20];//声明学号
//
//}stu;

//void print(stu*ps)
////这里将结构体s1的地址传给print,由于地址只占四个字节，所以可以节省空间，提高效率
//{
//	printf("%s\n", ps->name);
//	printf("%d\n", ps->age);
//	printf("%s\n", ps->id);
//}
//


//void print(stu tmp)
////由于形参tmp只是实参的一份临时拷贝
////所以在传参时，系统要额外为形参开辟空间
////如果实参特别大，这样会降低程序运行效率
//{
//	printf("%s\n", tmp.name);
//	printf("%d\n", tmp.age);
//	printf("%s\n", tmp.id);
//}
//
//int main()
//{
//	stu s1 = { "张三", 18, "19990722" };
//    //stu*ps = &s1;
//	print(s1);
//
//	return 0;
//}

//int main()
//{
//	int a = 40;
//	int c = 212;
//	printf("%d", (-8 + 22)*a - 10 + c / 2);
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("%d %d", a / b, a%b);
//
//	return 0;
//}

//字符转ASCII码
//int main()
//{
//	char ch = 0;
//	ch = getchar();
//   //用c来接收字符
//	printf("%d", ch);
//
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("a=%d,b=%d", &a,&b);
//	int tmp = 0;
//	tmp = a;
//	a = b;
//	b = tmp;
//	printf("a=%d,b=%d", a, b);
//
//	return 0;
//}


//通过scanf函数的%m格式控制可以指定输入域宽，输入数据域宽（列数），按此宽度截取所需数据；
//通过printf函数的%0格式控制符，输出数值时指定左面不使用的空位置自动填0。
//int main()
//{
//	int year, month, date;
//	scanf("%4d%2d%2d", &year, &month, &date);
//
//	printf("year=%d\nmonth=%.2d\ndate=%.2d\n", year, month, date);
//	//.的意思是左边不使用的地方自动补0，2代表数据域宽
//	return 0;
//
//}

//int main()
//{
//	int n = 0;
//	scanf("%2d", &n);
//	printf("%d", 1 << n);
//
//	return 0;
//}

//int main()
//{
//	char n = 0;
//	n = getchar();
//	printf("    %c\n", n);
//	printf("   %c %c\n", n, n);
//	printf("  %c %c %c\n", n, n, n);
//	printf(" %c %c %c %c\n", n, n, n, n);
//	printf("%c %c %c %c %c\n",n,n,n,n,n);
//	return 0;
//
//}

//int main()
//{
//	printf("%c%c%c%c%c%c%c%c%c%c%c%c\n", 73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116, 33);
//
//	return 0;
//}

//int main()
//{
//	char ch = 0;
//	ch = getchar();
//	if (65<=ch &&ch<=90||97<=ch&&ch<=122)
//		printf("YES");
//	else
//		printf("NO");
//	return 0;
//}
//
int main()
{
	int a=0;
	double b=0.0, c=0.0, d=0.0;
	scanf("%d;%lf,%lf,%lf", &a, &b, &c, &d);
	printf("The each subject score of No. %d is %.2lf, %.2lf, %.2lf",a,b,c,d);
	return 0;
}

//int main()
//{
//	int num;
//	float a, b, c;
//	scanf("%d;%f,%f,%f", &num, &a, &b, &c);
//	printf("The each subject score of  No.%d is %.2f, %.2f, %.2f.", num, a, b, c);
//}

//正确的输入方式
//int main()
//{
//	double a ;
//	scanf("%lf", &a);
//	printf("%.2lf", a);
//
//}