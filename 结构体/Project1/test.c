#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
//�ṹ�������
//�ṹ��ؼ���(struct)+��ѡ�����+������{ ��Ա��������+��Ա��  };
//struct student
//{
//	char name[10];//��������
//	int age;//��������
//	char id[20];//����ѧ��
//
//};
//
//int main()
//{
//
//	struct student stu = { "����", 18, "19990722" };
//	//�ṹ������+�ṹ�������+=+������{   ����Ա����  };
//	//����Ա����֮����,����
//	//�ṹ�嶨�����Ա���ݵ�˳��Ӧ������ʱһ��
//
//	printf("%s %d %s", stu.name, stu.age, stu.id);
//	//�ṹ�������.��Ա��
//	//�൱�ڴ�ӡ�ַ������������ݣ��ַ���
//
//	return 0;
//}
//
//typedef struct student
//{
//	char name[10];//��������
//	int age;//��������
//	char id[20];//����ѧ��
//
//}stu;
//
//int main()
//{
//	 stu s1= { "����", 18, "19990722" };
//	 stu*ps = &s1;
//	 //������һ����ָ������Ϊ�ṹ�����͵�ָ��ps
//	 printf("%s %d %s", ps->name, ps->age, ps->name);
//	 //ָ���->��Ա������
//	 //ps->name�൱������ָ����ʽṹ���е�name����
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
//	char name[10];//��������
//	int age;//��������
//	char id[20];//����ѧ��
//	mi m1;
//	//stu�ڲ��нṹ��ʱ��Ӧд�ϴ˽ṹ�����ͼ��Ͻṹ�������
//}stu;
//
//int main()
//{
//	
//	stu s1 = { "����", 18, "19990722", { "����", "ţ��" } };
//	printf("%s %d %s %s %s", s1.name, s1.age, s1.id, s1.m1.hobby, s1.m1.favorite_food);
//	//���ʽṹ���еĽṹ�������ʱ��   һ���ṹ�����1��.�����ṹ�������.��Ա��
//	//������������
//	stu*ps = &s1;
//	printf("\n");
//	printf("%s %d %s %s %s",ps->name, ps->age, ps->id, ps->m1.hobby, ps->m1.favorite_food);
//	//��һ���ṹ���ָ������������еĶ����ṹ��� . ��Ա��
//	return 0;
//}

//
//typedef struct student
//{
//	char name[10];//��������
//	int age;//��������
//	char id[20];//����ѧ��
//
//}stu;

//void print(stu*ps)
////���ｫ�ṹ��s1�ĵ�ַ����print,���ڵ�ַֻռ�ĸ��ֽڣ����Կ��Խ�ʡ�ռ䣬���Ч��
//{
//	printf("%s\n", ps->name);
//	printf("%d\n", ps->age);
//	printf("%s\n", ps->id);
//}
//


//void print(stu tmp)
////�����β�tmpֻ��ʵ�ε�һ����ʱ����
////�����ڴ���ʱ��ϵͳҪ����Ϊ�βο��ٿռ�
////���ʵ���ر�������ή�ͳ�������Ч��
//{
//	printf("%s\n", tmp.name);
//	printf("%d\n", tmp.age);
//	printf("%s\n", tmp.id);
//}
//
//int main()
//{
//	stu s1 = { "����", 18, "19990722" };
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

//�ַ�תASCII��
//int main()
//{
//	char ch = 0;
//	ch = getchar();
//   //��c�������ַ�
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


//ͨ��scanf������%m��ʽ���ƿ���ָ�������������������������������˿�Ƚ�ȡ�������ݣ�
//ͨ��printf������%0��ʽ���Ʒ��������ֵʱָ�����治ʹ�õĿ�λ���Զ���0��
//int main()
//{
//	int year, month, date;
//	scanf("%4d%2d%2d", &year, &month, &date);
//
//	printf("year=%d\nmonth=%.2d\ndate=%.2d\n", year, month, date);
//	//.����˼����߲�ʹ�õĵط��Զ���0��2�����������
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

//��ȷ�����뷽ʽ
//int main()
//{
//	double a ;
//	scanf("%lf", &a);
//	printf("%.2lf", a);
//
//}