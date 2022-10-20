#include<stdio.h>

// 初识函数 && 数组
int Add(int x, int y)            //函数体
{
	int z = x + y;
	return z;                   //返回整形常量   所以函数开头是整形int
}

int main()
{

	int num1 = 0, num2 = 0;
	scanf("%d%d", &num1, &num2);
	int sum = Add(num1, num2);            //调用函数
	printf("%d\n", sum);

	return 0;
}



 // 数组：一组相同类型的元素的集合
 // 数组是用下标来访问的
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	while (i < 10)
	{
		printf("%d\n", arr[i]);
		i++;
	}
	//char ch[5] = { 'a','b','c' };    // 不完全初始化，剩余的默认为0

	return 0;
}