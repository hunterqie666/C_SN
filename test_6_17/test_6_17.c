#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{//auto int a =10; 
//	int a = 10;//a�ֲ���������{}�Զ����� ����{}�Զ�����-->�Զ����� ǰ����и�autoʡ�Ե���
//	return 0;
//}

//int main()//sizeof
//{
//	int a = 4;
//	int arr[] = { 1,2,3,4,5,6 };//�����������ÿ��Ԫ����int
//	printf("%d\n", sizeof(a));//4
//	printf("%d\n", sizeof(char));//1
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof(arr));//24
//	return 0;
//}

//int main()
//{
//	char a = 'A';
//	printf("%d\n", sizeof(char));//1
//	printf("%c", a);//A
//}

//int main()
//{
//	int a = 10;
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", a);//10
//	 a = 1000000000000;
//	printf("%d", a);//-727379968 �����䷶Χ
//	return 0;
//}


//enum Day 
//{
//	MON=10, 
//	TUE,
//	WED, 
//	THU, 
//	FRI, 
//	SAT,
//	SUN
//};
//int main()
//{
//	enum Day s = MON;
//	printf("%d", s);
//	return 0;
//}

//int main()
//{
//	signed int a = 10;
//	signed long b = 10;
//	signed short c = 10;
//	return 0;
//}

//int main()
//{
//	unsigned int a = 1;
//	unsigned long b = 1;
//	unsigned short c = 1;
//	return 0;
//}

//int main()
//{
//	short a = 10;
//	printf("%d\n", sizeof(short));//2
//	a = 32768;
//	printf("%d\n", a);//-32786
//	unsigned short b = 65538;
//	printf("%d", b);//2
//}//��û����ȷ��ӡ����

//int main()
//{
//	long a = 10;
//	printf("%d\n", sizeof(long));//4
//	printf("%d\n", a);//10
//	a = 1000000000000;
//	printf("%d", a);//-727379968 �����䷶Χ
//	return 0;
//}

//int main()
//{
//	float a = 1.1;
//	printf("%f\n", a);//1.100000
//	printf("%d", sizeof(float));//4
//	return 0;
//}

//int main()
//{
//	float a = 12.1;
//	printf("%lf\n", a);//12.100000
//	printf("%d", sizeof(double));//8
//	return 0;
//}

//struct tag struct���ṹ��ؼ��� tag����ǩ
//{//����
//    char name[20];
//    char tele[12];
//    //��Ա���� �����б�
//}variable - list;//��Ա�б�  PS��������ܵ�

//struct student
//{
//	char SEX[20];
//	char NAME[20];
//	int year;
//}A;
//
//int main()
//{
//	struct student A = { "��","hunter",21 };
//	printf("%s\n", A.SEX);//��
//	printf("%s\n", A.NAME);//hunter
//	printf("%d", A.year);//21
//	return 0;
//}

//union Un
//{
//	char c;
//	int i;
//};
//
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));//4
//	printf("%p\n", &u);//00000034F18FFA94
//	printf("%p\n", &(u.c));//00000034F18FFA94
//	printf("%p\n", &(u.i));//00000034F18FFA94
//	return 0;
//}

//int main()//typedef
//{//typedef -���Ͷ���-�����ض��� �൱�������
//	typedef int I;	
//	I num = 20;
//	printf("%d", num);//20 �������
//	return 0;
//}

//enum Sex
//{
//	//ö�ٵĿ���ȡֵ-����
//	MALE, //0
//	FEMALE, //1
//	SECRET,//2  û�и�ֵ�����Ĭ�ϴ�0��ʼ
//};
//
//int main()
//{
//	enum Sex s = MALE;
//	printf("%d", s);//0
//	return 0;
//}

//int main()//switch��� 
//{//���������ͬ��case���� ��ͬ�ľͿ���ɾ��printf��break��ֱ�����һ�� 
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)// switch(���ͱ��ʽ)
//	{//case ����� break�ǳ���
//	case 1:
//		printf("1\n");
//		break;
//	case 2:
//		printf("2\n");
//		break;
//	case 3:
//		printf("3\n");
//		break;
//	case 4:
//		printf("4\n");
//		break;
//	default://����ĳ��� ǰ�涼δƥ���Ͼͻᵽdefault default��caseû���ϸ��˳�����
//		printf("�������\n");
//	}
//	return 0;
//}

//int main()
//{
//	int age = 140;
//	if (age >= 18 && age < 28)
//		printf("����\n");
//	else
//	{
//		if (age >= 28 && age < 60)
//			printf("׳��\n");
//		else if (age >= 60 && age < 80)
//			printf("����\n");
//		else
//			printf("����\n");
//	}
//	return 0;
//}
//
//int main()
//{//else����������δƥ���if��ƥ��
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//		else
//			printf("haha\n");
//	return 0;//���ɶҲû�� ����a=0 a==1 ��ƥ�䣬ֱ�ӾͲ�����
//}// ���������֮ƥ�� ����if(a==1){}����������else

//int main()
//{
//	int a = 10;
//	if (a > 10);
//	{
//		a = 1;
//	}
//	printf("%d", a);
//	return 0;
//}

//int main()//goto���
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("��ע�⣬��ĵ��Խ���1�����ڹػ���������룺��������ȡ���ػ�:>\n");
//	printf("������:>");
//	scanf("%s", input);
//	if (strcmp(input, "������") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	while (a <= 10)
//	{//��ӡ1-10������
//		if (a == 5)
//			//break;//���ֹͣ 1 2 3 4 
//			continue;//��ֹ����ѭ������Ĵ��벻��ִ�� ֱ�ӽ��뵽whileѭ�����жϲ���
//		printf("%d\n", a);//1 2 3 4 _ ���һֱ�й������ ��a++��a=5��while����,����if�ж����,�ͻ�continueֱ��while a=5
//		a++;
//	}
//	return 0;
//}


//int main()// do ...while ѭ�� 
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			//break;
//			continue;//��while�������
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}


//int Max(int a, int b)
//{
//	if (a > b)
//		return a;
//	else
//		return b;
//}
//int main()
//{
//	int MAX=0, b=20, a = 10;
//	 MAX= Max(a, b);
//	 printf("%d", MAX);//20
//	return 0;
//}

//extern int a;
//int main()
//{
//	printf("%d", a);
//	return 0;
//}


//static int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}//������һ���½���
// 
//extern int Add(int, int);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	sum = Add(a, b);
//	printf("sum=%d\n", sum);
//	return 0;
//}
//
//static int g_val = 2020;
//int main()//static �ı�ȫ�ֱ�����������  ����
//{//extern �����ⲿ���ŵ� 
//	extern int g_val;
//	printf("%d\n", g_val);
//	return 0;
//}
//
//void test()
//{
//	static int a = 1;
//	a++;
//	printf("a=%d\n", a);
//}
//
//int main()//static ���ξֲ����� 
//{//static�ֲ��������������ڱ㳤
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	register int a = 10;//�����a����ɼĴ������� ���յľ���Ȩ�����ڱ���������
//	printf("%d", a);
//	return 0;
//}