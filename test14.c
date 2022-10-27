#include<stdio.h>

int main()
{
	//输入密码
	char password[20] = { 0 };
	printf("请输入密码\n");
	scanf("%s", password);
	//gets是读取一行字符

	printf("请确认密码（Y/N）\n");
	//清理缓冲区
	//getchar（）; //处理'\n'

	int tem = 0;
	//清理缓冲区中多个字符
	while ((tem = getchar()) != '\n')
	{
		;

	}
	int ch = getchar();
	if (ch == 'Y')
	{
		printf("确认成功\n");

	}
	else
	{
		printf("确认失败\n");
	}

	return 0;
}
