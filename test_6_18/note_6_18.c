#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//static
//静态的
//在C语言中，static有3中用法
//1. static 修饰局部变量
//2. static 修饰全局变量
//3. static 修饰函数

//1：局部变量
////void test1()
////{
////    int i = 0;
////    i++;
////    printf("%d ", i);//1 1 1 1 1
////}
//void test2()
//{
//    static int i = 0;
//    i++;
//    printf("%d ", i);//1 2 3 4 5
//}
////使i由栈区进入到了静态区
////test1和test2之间的差距就是i有没有static
////当test2有static的时候我们看到其输出的值变成1 2 3 4 5
////所以我们可以得出结论：
////修饰局部变量的时候，增加局部变量的生命周期(使得其生命周期跟整个工程一样了)。
////作用域不变，只能在局部范围内使用。
//int main()
//{
//    int i = 0;
//    for (i = 0; i < 5; i++)
//    {
// //       test1();
//        test2();
//    }
//    return 0;
//}

////2：全局变量
//
////extern 声明来自外部文件的符号
////下面代码告诉编辑器 a是来自其他文件
//extern int a;
////当另一个.C文件的全局变量有了static时，我们发现a无法解析
////所以我们可以得出结论
////全局变量被static修饰，使得这个全局变量只能在本源文件内使用，不能在其他源文件内使用。
////改变了全局变量的作用域
//int main()
//{
//	printf("%d", a);//10
//	return 0;
//}

////3.函数
////声明来自外部的函数
//extern int Add(int x, int y);
//
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = Add(a, b);
//	printf("%d\n", c);
//	return 0;
//}

//#define Max 3
//#define Add(x,y) (x+y) 
//int main()
//{
//	int arr[Max] = { 0 };
//	int a = Max;
//	int b = 3;
//	int sum = Add(a, b);
//	printf("%d", sum);
//	return 0;
//}

//int main()
//{//一个叫变量a的向内存申请了四个字节的空间去储存10
//	int a = 10;
//	int*p=&a;//把取出的a的地址存放在*p里面，因为存的变量是int类型，所以前面就是int
//	//*表示p是指针变量
//	//&取地址符，取出a的地址。
//	*p = 20;//根据p里面存的a的地址找到a，并将其改成20
//	//*解引用操作符
//	printf("%d", a);//20
//	return 0;
//}

//总结：
//1. 内存会被划分以字节为单位的一个个的内存单元
//2. 每个内存单元都有编号，编号 =地址=指针
//3. C语言中创建的变量，其实是向内存申请一块空间,比如：int a = 10，就是向内存申请4个字节的空间，每个字节都有地址
//4. &a的时候，拿出的是4个字节中地址较小的那个字节的地址(编号)
//5. 这个地址要存储起来，给一个变量，这个变量是用来存放地址（指针）所以叫指针变量:int *p= &a;
//6. p中存放的是a的地址，要通过pa中的地址找到a，怎么写？*pa--> 通过pa中的地址找到a *p= 20;//本质是修改a

//int main()
//{
//	//地址（指针）在所有地方都是4/8
//	//32位机器是4 64位机器是8·
//	char* pc;
//	short* ps;
//	int *pi;
//	double* pd;
//	printf("%d\n", sizeof(pc));//4/8
//	printf("%d\n", sizeof(ps));//4/8
//	printf("%d\n", sizeof(pi));//4/8
//	printf("%d\n", sizeof(pd));//4/8
//	return 0;
//}

struct Stu
{
	char NAME[20];
	char SEX[20];
	int YEAR;
};

int main()
{
	struct Stu a = { "张三","男",18 };
	printf("%s %s %d\n", a.NAME, a.SEX, a.YEAR);
	struct Stu* p = &a;
	printf("%s %s %d", p->NAME, p->SEX, p->YEAR);
	//结构体变量 . 结构体成员
	//结构体指针 -> 结构体成员
	return 0;
}