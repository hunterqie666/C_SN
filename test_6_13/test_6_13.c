#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//�ֲ�����������
//1. �ֲ��������������Ǳ������ڵľֲ���Χ��
//2. ȫ�ֱ��������������������̡�
// ��������
//��������������ָ���Ǳ����Ĵ���������������֮���һ��ʱ���
//1. �ֲ����������������ǣ������������������ڿ�ʼ�����������������ڽ�����
//2. ȫ�ֱ��������������ǣ�����������������ڡ�
//extern int a;
//int main()
//{//���￴��a�Ķ�����cooperate.c�ļ��ﵫ�Ǿ���extern������a�Ϳ���ʹ��
//	{
//	printf("%d", a);
//		/*int a = 11;
//		printf("%d", a);*/
//	}
//	//printf("%d", a);//��߷���a����{}��a�Ͳ�������
//	return 0;
//}

//����
//1.���泣��
//�磺'A'  123����

////2.const���εĳ���
////const ���εı���ֻ��ӵ�г������� ��������Ǳ���
//int main()
//{
//	const int a = 10;
//	printf("%d\n", a);//10
//	//a = 12;
//	//printf("%d", a);//12
//	int arr[a] = { 0 };
//	return 0;
//}

//#define M 10
//int main()
//{
//	int a = M;
//	printf("%d", a);//10
//	int arr[M] = { 0 };//������������
//	return 0;
//}

//enum Sex 
//{
//	MALE,
//	FAMLE,
//	SECRECT
//};
//int main()
//{
//	enum Sex s = MALE;
//	printf("%d\n", s);//0
//	printf("%d\n", FAMLE);//1
//	printf("%d", SECRECT);//2
//	return 0;
//}

////�ַ���
////�ַ����Ľ�����־��һ��\0��ת���ַ����ڼ����ַ������ȵ�ʱ��\0�ǽ�����־���������ַ������ݡ�
//int main()
//{
//    char arr1[] = "ctx";
//    char arr2[] = { 'c', 't', 'x' };
//    char arr3[] = { 'c', 't', 'x', '\0' };
//    printf("%s\n", arr1);//ctx
//    printf("%s\n", arr2);//����� ctx�����������������������������ctx
//    printf("%s\n", arr3);//ctx
//	return 0;
//}//arr2 ��Ϊ�ǵ����ַ� û��\0��Ϊ������־ ��һֱ��������ڴ�ռ���� ֪����δ֪�ռ��ҵ�\0

//#include <string.h>
//int main()
//{
//    printf("c:\code\test.c\n");
//    printf("%d", strlen("c:\code\test.c\n"));//13
//    return 0;
//    //strlen�ǿ⺯�� ͷ�ļ���#include <string.h>���ڿ��ַ������� ����\0��ֹͣ
//}

//c���������ֽṹ 1.˳��ṹ 2.ѡ��ṹ 3.ѭ���ṹ
//˳��ṹ���Ǵ�������

//ѡ��ṹ
//if��䡢switch���

//int main()//if
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a == 1)
//	{
//		printf("YYDS");
//	}
//	else
//	{
//		printf("NB");
//	}
//	return 0;
//}

////ѭ���ṹ while for do...while
//int main()
//{
//	int a = 0;
//	while (a<10)
//	{
//		a++;
//		printf("%d ", a);
//	}//һֱѭ����
//	return 0;
//}

//����

void test(int a);//��������

void test(int a)//�������� 
//�����ں���������Ķ���Ҳ��������ĺ��������Ͳ���Ҫд��������
//�����������Ҫ
{
	;
}
int main()
{
	int a = 0;
	test(a);//��������
}
void test(int a)//�������� 
//�����ں���������Ķ���Ҳ��������ĺ�������
{
	;
}