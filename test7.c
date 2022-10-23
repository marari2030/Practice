#include<stdio.h>

/* // typedef  类型重定义

typedef unsigned int u_int;   //unsigned int 在此时被定义为u_int

int main()
{
	unsigned int num1 = 100;
	u_int num2 = 100;    //此时的num1和num2被定义的方法相同，但显然num2的方法更nice
	

	return 0;
}  */

//static  静态的
//1、static修饰局部变量
//2、static修饰全局变量
//3、static修饰函数	

/* void test()
{
	static int a = 1;    //a是局部变量   static修饰局部变量，改变了局部变量的生命周期（本质上是改变了变量的存储类型）
	a++;
	printf("%d\n", a);
}

int main()
{
	int i = 0;
	while (i < 10)
	{
		test();
		i++;
	}


	return 0;
}*/


//extern 声明外部符号的
//全局变量在整个工程中都可以使用
//static修饰全局变量，使得这个全局变量只能在自己所在的源文件（.c）内部可以使用，其他源文件不可以使用
//全局变量在其他源文件内部可以被使用，是因为全局变量具有外部链接属性，但是被static修饰之后，就变成了内部链接属性，其他源文件就不能链接到这个静态的全局变量了！

/* extern int g_val;
int main()
{

	printf("%d\n", g_val);

	return 0;
}*/


//声明函数
extern int Add(int x, int y);
int main()
{
	int a = 10, b = 20;
	int sum = Add(a, b);
	printf("sum=%d\n", sum);

	// static修饰函数，使得这个函数只能在自己所在的源文件（.c）内部可以使用，其他源文件不可以使用
	//本质上：static是将函数的外部链接属性变成了内部链接属性！（和static修饰全局变量一样）
	return 0;
}
