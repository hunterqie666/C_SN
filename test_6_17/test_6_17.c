#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{//auto int a =10; 
//	int a = 10;//a局部变量出了{}自动销毁 进出{}自动创建-->自动变量 前面会有个auto省略掉了
//	return 0;
//}

//int main()//sizeof
//{
//	int a = 4;
//	int arr[] = { 1,2,3,4,5,6 };//数组类型里的每个元素是int
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
//	printf("%d", a);//-727379968 超过其范围
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
//}//并没有正确打印出来

//int main()
//{
//	long a = 10;
//	printf("%d\n", sizeof(long));//4
//	printf("%d\n", a);//10
//	a = 1000000000000;
//	printf("%d", a);//-727379968 超过其范围
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

//struct tag struct：结构体关键字 tag：标签
//{//例如
//    char name[20];
//    char tele[12];
//    //成员变量 变量列表
//}variable - list;//成员列表  PS：这里；不能掉

//struct student
//{
//	char SEX[20];
//	char NAME[20];
//	int year;
//}A;
//
//int main()
//{
//	struct student A = { "男","hunter",21 };
//	printf("%s\n", A.SEX);//男
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
//{//typedef -类型定义-类型重定义 相当于起别名
//	typedef int I;	
//	I num = 20;
//	printf("%d", num);//20 正常输出
//	return 0;
//}

//enum Sex
//{
//	//枚举的可能取值-常量
//	MALE, //0
//	FEMALE, //1
//	SECRET,//2  没有赋值的情况默认从0开始
//};
//
//int main()
//{
//	enum Sex s = MALE;
//	printf("%d", s);//0
//	return 0;
//}

//int main()//switch语句 
//{//如果都是相同类case内容 相同的就可以删除printf、break，直至最后一个 
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)// switch(整型表达式)
//	{//case 是入口 break是出口
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
//	default://输入的常量 前面都未匹配上就会到default default和case没有严格的顺序控制
//		printf("输入错误\n");
//	}
//	return 0;
//}

//int main()
//{
//	int age = 140;
//	if (age >= 18 && age < 28)
//		printf("青年\n");
//	else
//	{
//		if (age >= 28 && age < 60)
//			printf("壮年\n");
//		else if (age >= 60 && age < 80)
//			printf("老年\n");
//		else
//			printf("高人\n");
//	}
//	return 0;
//}
//
//int main()
//{//else和里的最近的未匹配的if相匹配
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//		else
//			printf("haha\n");
//	return 0;//结果啥也没有 上面a=0 a==1 不匹配，直接就不进入
//}// 如果想让与之匹配 就在if(a==1){}给个大括号else

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

//int main()//goto语句
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("请注意，你的电脑将在1分钟内关机，如果输入：我是猪，就取消关机:>\n");
//	printf("请输入:>");
//	scanf("%s", input);
//	if (strcmp(input, "我是猪") == 0)
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
//	{//打印1-10的数字
//		if (a == 5)
//			//break;//这边停止 1 2 3 4 
//			continue;//终止本次循环后面的代码不在执行 直接进入到while循环的判断部分
//		printf("%d\n", a);//1 2 3 4 _ 这边一直有光标在闪 在a++；a=5后while成立,进入if判断相等,就会continue直接while a=5
//		a++;
//	}
//	return 0;
//}


//int main()// do ...while 循环 
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			//break;
//			continue;//跟while情况类似
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
//}//在另外一个新建项
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
//int main()//static 改变全局变量的作用域  减少
//{//extern 声明外部符号的 
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
//int main()//static 修饰局部变量 
//{//static局部变量的生命周期便长
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
//	register int a = 10;//建议把a定义成寄存器变量 最终的决定权还是在编译器手中
//	printf("%d", a);
//	return 0;
//}