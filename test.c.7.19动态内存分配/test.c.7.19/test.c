#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

//��̬�ڴ����--����

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
//���鲻��ʹ�ñ���

#include<string.h>
#include<errno.h>
//int main()
//{
//	//mollac 
//	//���ڴ�����10�����Ϳռ�
//	int *p = (int*)malloc(10*sizeof(int));
//	//��̬�ڴ濪��
//	if (p == NULL)
//	{
//		//��ӡ����ԭ���һ����ʽ
//		printf("%s\n", strerror(errno));
//
//	}
//	else
//	{
//		//����ʹ�ÿռ�
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
////���ռ䲻��ʹ��Ӧ�ý����ռ�
//	free(p);//��ʹ�ͷ���p�Ŀռ䣬��p���ɼ�סԭ�ȵĵ�ַ
//	//p���ױ��Ұָ�룬Ϊ�˱���Ұָ�룬��p����
//	p = NULL;
//	return 0;
//} 

//int main()
//{
//	//malloc(10*sizeof(int));
//	//int *p = (int*)calloc(10, sizeof(int));//��ʼ���ڴ�ռ�����Ϊ0;
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
//	//realloc������̬�ڴ濪�ٵĴ�С
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
	////ֻ����ʹ��malloc���ٵ�20���ֽڵĿռ�
	////�������20���ֽڲ����������ǵ�Ҫ��
	////����ϣ���ܹ���40���ֽڵĿռ�
	////����Ϳ���ʹ��realloc������
	////int*p2=realloc(p, 40);
	////�����ռ䲻�䣬����ԭ������
	////Σ���﷨:p=realloc(p, 40); ����Ƿ�����
	////realloc���﷨�淶:
	////1.���ԭp��ָ��Ŀռ�����г���ռ���׷�Ӻ󷵻�ԭ��ַ��
	////2.�������⿪�ٿռ䣬�����µ�ַ������ԭ���ݣ��ͷžɵ��ڴ�ռ�
	////3.���׷�����ݹ�����ôp���Զ����ٱ���ֵΪ��ָ��
	////����Ҫ���µı���������
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
//	//�ͷ��ڴ�
//	free(p);
//	p = NULL;
//	return 0;
//}

//1.��ʹ��mollac calloc realloc�м��ж��Ƿ񷵻ؿ�ָ��
//2.ҲҪ���⶯̬�ڴ��Խ�����
//3.�ԷǶ�̬�ڴ�ʹ��free
//4.ʹ��free�ͷŶ�̬�ڴ��һ����
//5.��ͬһ�鶯̬�ڴ�Ķ���ͷ�
//6.��̬�����ڴ������ͷ�

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
//			//p��ַ�Ѿ�������
//		}
//			free(p);//p�����ˣ��Ѿ�����ԭ���ĵ�ַ��
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
//�������
//void GetMemory(char*p)
//{
//	//printf("%p", p); NULL
//	//p��str��һ����ʱ����
//	p = (char*)malloc(100);
//	//pָ��һ���տ��ٵ��ֽڴ�СΪ100�Ŀռ���׵�ַ
//	//����p���βΣ�str����û�б��ı�
//	//�����˳���p�������ˣ���ʱ����ָ��Ŀռ�û�б����٣�
//	//��������ڴ�й¶������
//}
//void Test(void)
//{
//	char*str = NULL;//str��һ��ָ�룬����ֵ��ΪNULL
//	GetMemory(str);//��str�����ȥ�൱�ڴ�ֵ��NULL�����ܱ��ı�
//	strcpy(str, "hello world\n");//str����Ϊ��ָ��
//	printf(str);//�޴�ӡ
//}
//int main()
//{
//	Test();
//	return 0;
//}
//�Ľ�����

//void GetMemory(char**p)//&str��һ��ָ��ĵ�ַ���ö���ָ��������
//{
//	//pָ��str
//	*p = (char*)malloc(100);
//	//ͨ��*p�õ�str���ڽ��¿��ٵ��ֽڴ�СΪ100�Ķ�̬�ڴ�ռ�ĵ�ַ��ֵ����
//}
//void Test(void)
//{
//	char*str = NULL;
//	GetMemory(&str);//����ȥstr�ĵ�ַ����ζ�ſ���ͨ���������޸�str������
//	strcpy(str, "hello world\n");//str�ĵ�ַ�Ѿ����ı�
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}

//char* GetMemory(char**p)//&str��һ��ָ��ĵ�ַ���ö���ָ��������
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