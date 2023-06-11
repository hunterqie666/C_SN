#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>//头文件

//int main()
//{//main是主函数，C语言的代码都是从main函数开始的
////一个项目里面只能有一个main函数 PS：注意不要写成mian
//	printf("hello world");//printf是输出函数 也是库函数 可以直接使用的 打印信息
//	return 0;
//}//int 整型的意思 main前面的int表示main函数调用返回的一个整型值（与return 0对应）

//int main()
//{
//	printf("%d\n", sizeof(char));//1 字符数据类型
//	printf("%d\n", sizeof(int));//4 整型
//	printf("%d\n", sizeof(short));//2 短整型
//	printf("%d\n", sizeof(long));//4 长整型
//	printf("%d\n", sizeof(long long));//8更长整型
//	printf("%d\n", sizeof(double));//8 双精度浮点数
//	printf("%d", sizeof(float));//4 单精度浮点数
// //long long>=long>=int>short>char
//}//ps:%d：表示以10进制的方式打印
////\n：是转义字符 表示换行
////sizeof是看其占空间的大小 单位是字节 1bit=8byte 1kb=1024byte 1mb=1024kb 1g=1024mb

//int a = 10;
//int main()
//{
//	int a = 10;
//	printf("%d", a);
//}//全局变量：在{}外边定义的变量就是全局变量
////局部变量：就是{}内部定义的变量就是局部变量
////当前局部和全局变量在一个地方都可以使用的时候，局部优先

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d", &a, &b);
//	c = a + b;
//	return 0;
//}//printf是输出函数 scanf是输入函数;