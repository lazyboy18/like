#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
//�ṹ������
//struct stu {
//	char name[20];
//	char tele[20];
//	char sex[10];
//	int age;
//}s4 ,s5 ,s6;
//
//struct stu s3;
//	//s3s4s5s6s��ȫ�ֱ���
//struct {
//	char name[20];
//	char tele[20];
//	char sex[10];
//	int age;
//}s7;//�����ṹ������
//struct {
//	char name[20];
//	char tele[20];
//	char sex[10];
//	int age;
//}*ps7;//�����ṹ��ָ������
//
//
//int main()
//{
//		struct stu s1;//�ֲ�����
//		return 0;
//}

//struct Node
//{
//
//	int date;
//	struct Node n;
//};//д������ 
//struct Node  //<--������
//{
//	int date;
//	struct Node*nest;   //<--��ַ��
//};//����洢   �ṹ���������  
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

//�ṹ�������ýṹ��ʱ������Ҫ˫���ţ�Ӧ��ʱ��˫.��

//�ṹ���ڴ����
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
//	//�ڴ�����
//	//0x00DDFB30  61 62 cc cc   
//	//0x00DDFB34  01 00 00 00
//	//8���ֽ�
//	struct S2 s2 = { 'b', 1, 'a' };
//	//�ڴ�����
//	//0x00EFFBA0  62 cc cc cc  
//	//0x00EFFBA4  01 00 00 00  
//	//0x00EFFBA8  61 cc cc cc
//	//12���ֽ�
//	return 0;
//}

//λ��

struct S{
	int a : 2;//aֻ��Ҫ2������λ
	int b : 5;//bֻ��Ҫ5������λ
	int c : 10;//cֻ��Ҫ10������λ
	int d : 30;//dֻ��Ҫ30������λ
};



int main()
{
	struct S s;
	printf("%d\n", sizeof(s));


	return 0;
}