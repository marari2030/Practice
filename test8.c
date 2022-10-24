#include<stdio.h>

//define是一个预处理指令

//1、 #define MAX 1000   这是define定义常量
//2、define定义宏

#define ADD(X,Y) ((X)+(Y))
int main()
{
	printf("%d\n", 4*ADD(2, 3));    


	return 0;

}
