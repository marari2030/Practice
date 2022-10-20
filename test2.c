#include<stdio.h>

//      初识循环语句
//学习-代码line >= 30000  --找到一个不错的offer

int main()
{
	int line = 0;

	while (line < 30000)         //循环语句
	{
		printf("继续敲代码 %d\n",line);
		line++;
	}

	if (line >= 30000)
		printf("好offer\n");

	return 0;
}