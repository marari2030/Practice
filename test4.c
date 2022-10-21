#include<stdio.h>

//操作符可以分为赋值操作符、单目操作符、关系操作符
int main()
{
	//float a = 9 / 2.0;

	//   % 取模操作符
	//printf("%f\n",a);


	//sizeof是一个操作符   不是函数
	// 计算类型或者变量的大小的   单位：字节    1字节=8比特位
	//sizeof计算变量的大小时，后面的（）可以省略

	int a = 8;
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof a);

	int arr[10] = { 0 };
	printf("%d\n", sizeof(arr));       //计算的是数组的大小    单位：字节   注释：数组的大小是数组所有元素的大小总和
	printf("%d\n", sizeof(arr[0]));     //求单个数组元素的大小

	int sz = sizeof(arr) / sizeof(arr[0]);     //计算数组元素个数
	printf("%d\n", sz);

	return 0;
}

