#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{//scanf�������гɹ���ʱ��᷵�����úõĲ����ĸ���
//    //������ʧ�ܵ�ʱ��᷵�� EOF ��ֵ��-1��
//    //����Ҫ��������ʱ ֱ��ctrl+z
//    int a=0,b=0, ret = scanf("%d %d", &a,&b);
//    printf("%d",ret);//ret ���2
//    int num = 0;
//    while (scanf("%d", &num) != EOF)
//    {
//        if (num % 2 == 1)
//            printf("Odd\n");
//        else
//            printf("Even\n");
//    }
//    return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (n < 12)
//	{
//		printf("%d", 2);
//		return 0;
//	}	
//	int i = 0, time = 0;
//	while ((n -= 12)>=0)
//	{
//		time += 4;
//		if (n <= 12)
//		{
//			time += 2;
//			break;
//		}
//	}
//	printf("%d", time);
//	return 0;
//}

//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    printf("%d\n", n / 12 * 4 + 2);
//
//    return 0;
//}//�򵥷���

//---------------------------------



//int main()
//{
//	int arr[10] = { 0 };
//	int tmp = 0;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//		
//	}
//	int left = 0;
//	int right=9;
//	while (left < right)
//	{
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//	int arr[12] = { 73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116 , 33 };
//	for (int i = 0; i < 12; i++)
//	{
//		printf("%c", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	long long sum = 0;
//	int a = 0;
//	scanf("%d", &a);
//	while (a)
//	{
//		sum += a;
//		a--;
//	}
//	printf("%lld", sum);
//	return 0;
//}

//int main()
//{
//    long long n = 0;
//    scanf("%lld", &n);
//    printf("%lld", (1 + n) * n / 2);
//    return 0;
//}//���㷨
//----------------------------------------


//int main()
//{
//	int c=0 , d=0 , a = 0, b = 0;
//	scanf("%d %d", &a, &b);
//	 c = a / b;
//	 d = a % b;
//	printf("%d %d", c, d);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	double c = 0, b = 0;
//	scanf("%d %lf", &a, &b);
//	b /= 100;
//	c = (double)(a / b / b);
//	printf("%.2lf", c);
//	return 0;
//}