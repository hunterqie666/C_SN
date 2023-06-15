#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//int main()
//{//数组的每个元素都有一个下标，下标是从0开始的。 数组可以通过下标来访问的。
//	int arr[5] = { 1,2,3,4,5 };
//	printf("%d", arr[3]);
//	return 0;
//}

//int main()
//{
//	int arr1[5] = { 0 };
//	int arr2[] = { 1,2,3,4,5,6 };
//	int arr3[5] = { 1,2,3 };
//	return 0;
//}

//int main()
//{
//	int arr[2 * 1] = { 0 };
//	int arr[2] = { 0 };
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 3;
//	int c = 0;
//	c = a + b;
//	printf("%d\n", c);
//	c = a - c;
//	printf("%d\n", c);
//	c = a * b;
//	printf("%d\n", c);
//	c = a / b;
//	printf("%d\n", c);// /是看整数部分
//	c = a % b;// 10÷3= 3 …1   
//	printf("%d\n", c);//%是取模的意思，取的是余数
//}

//int main()//位移操作符是跟二进制位相关系的，移动的是二进制位。
//{
//	int a = 1;//整型占4个字节 32为bit位 （这里没有32个 就简单写下）
//	int b = a << 2;//移动了两位
//	printf("%d\n", b);//4
//	printf("%d\n", a);//1
//}//a的值是不变的 除非a变的值重新赋予a

//int main()
//{
//	int a = 3;    //011
//	int b = 5;	  //101        
//	int c = a & b;//001    
//	printf("%d\n", c);
//	return 0;
//}//输出结果为1

//int main()//赋值操作符 =   +=   -=   *=   /=   &=   ^=   |=   >>=   <<=
//{//& ^ | 就跟自己给的值进行操作   a &= 2;
//	int a = 2;
//	//a = 20;//赋值  ==判断相等
//	//a = a + 10;//这两种情况一样
//	//a += 10; //这两种情况一样
//	a <<= 2; //这两种情况一样
//	a = a << 2;//这两种情况一样
//	printf("%d\n", a);
//	return 0;//同理
//}

//int main()
//{// 0-假   非0--真
//	int a = 10;
//	int b = 20;
//	printf("%d\n", a);//10
//	printf("%d\n", !b);//0  把假的变为真的 真的变为假的
//	return 0;
//}

//int main()//&取地址操作符
//{
//	int num = 10;
//	printf("%p\n", &num);
//	return 0;
//}

//int main()//sizeof
//{
//	int a = 4;
//	int arr[] = { 1,2,3,4,5,6 };//数组类型里的每个元素是int
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof a);
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(arr));
//	return 0;
//}

//int main()//~按位（2进制）取反 原来是0 的取1 1取0
//{//原码、反码、补码
////原码（符号位不变 其他位取反）-->反码（最后一位+1）——-->补码
////补码(最后一位-1)--->反码（符号位不变 其他位取反）---->原码
////正数的原反补是一样的
////最高位是符号位 1为复数 为0是正数
////例 111111111111111111111111 补码
////   111111111111111111111110 反码
////   100000000000000000000001 原码
//	int a = 0;
//	int b = ~a;//内存存贮的是补码
//	printf("%d\n", b); //打印出来的是原码
//	return 0;//输出结果为-1 
//}

//int main()
//{
//	int a = 10;
//	int b = --a; //前置-- ，先--，再使用 a=9 b=9
//	//int b = a--;//后置--，先使用，再-- a=9 b=10
//  //int b = ++a;//前置++ ，先++，再使用 a=11 b=11
//  //int b = a++;//后置++,先使用，再++ a=11 b=10
//	printf("a=%d  b=%d\n", a, b);
//	return 0;
//}

//int main()//强制类型转化，让一个类型转化为一个类型
//{//原本3.14是double类型强制转换位int
//	int a = (int)3.14;
//	printf("%d", a);//3
//	return 0;
//}

//int main()
//{//0为假 非0为真
//	int a = 3;
//	int b = 5;
//	int c = a || b;// ||逻辑或 两个为假才为假 有一个真就是真 两真为真
//	//int c = a && b;//逻辑与&& 全为真 一真一假为假
//	printf("%d\n", c);//后面输出为1
//	return 0;
//}

//int main()
//{
//	int a = 2;
//	int b = 2;
//	printf("%d\n", a && b);
//	printf("%d", a > b && b);
//	return 0;
//}

//int main()//条件操作符
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = (a > b ? a : b);
//	printf("max=%d\n", max);//max=20
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	b = (a += 1, b += 1, a += b, b += a);
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//}