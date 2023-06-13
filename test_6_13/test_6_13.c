#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//局部变量作用域
//1. 局部变量的作用域是变量所在的局部范围。
//2. 全局变量的作用域是整个工程。
// 生命周期
//变量的生命周期指的是变量的创建到变量的销毁之间的一个时间段
//1. 局部变量的生命周期是：进入作用域生命周期开始，出作用域生命周期结束。
//2. 全局变量的生命周期是：整个程序的生命周期。
//extern int a;
//int main()
//{//这里看到a的定义在cooperate.c文件里但是经过extern声明其a就可以使用
//	{
//	printf("%d", a);
//		/*int a = 11;
//		printf("%d", a);*/
//	}
//	//printf("%d", a);//这边发现a出了{}其a就不能用了
//	return 0;
//}

//常量
//1.字面常量
//如：'A'  123……

////2.const修饰的常量
////const 修饰的变量只是拥有常量属性 其根本还是变量
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
//	int arr[M] = { 0 };//程序正常运行
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

////字符串
////字符串的结束标志是一个\0的转义字符。在计算字符串长度的时候\0是结束标志，不算作字符串内容。
//int main()
//{
//    char arr1[] = "ctx";
//    char arr2[] = { 'c', 't', 'x' };
//    char arr3[] = { 'c', 't', 'x', '\0' };
//    printf("%s\n", arr1);//ctx
//    printf("%s\n", arr2);//随机数 ctx烫烫烫烫烫烫烫烫烫烫烫烫烫烫蘡tx
//    printf("%s\n", arr3);//ctx
//	return 0;
//}//arr2 因为是单个字符 没有\0作为结束标志 就一直往后面的内存空间查找 知道在未知空间找到\0

//#include <string.h>
//int main()
//{
//    printf("c:\code\test.c\n");
//    printf("%d", strlen("c:\code\test.c\n"));//13
//    return 0;
//    //strlen是库函数 头文件是#include <string.h>用于看字符串长度 遇到\0就停止
//}

//c语言有三种结构 1.顺序结构 2.选择结构 3.循环结构
//顺序结构就是从上往下

//选择结构
//if语句、switch语句

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

////循环结构 while for do...while
//int main()
//{
//	int a = 0;
//	while (a<10)
//	{
//		a++;
//		printf("%d ", a);
//	}//一直循环做
//	return 0;
//}

//函数

void test(int a);//函数声明

void test(int a)//函数定义 
//这种在函数的上面的定义也算是特殊的函数声明就不需要写函数声明
//放在下面就需要
{
	;
}
int main()
{
	int a = 0;
	test(a);//函数调用
}
void test(int a)//函数定义 
//这种在函数的上面的定义也算是特殊的函数声明
{
	;
}