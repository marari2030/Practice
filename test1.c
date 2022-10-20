#include<stdio.h>

int main()
{
	int a = 0;
	printf("加入bite大家庭\n");
	printf("你会好好学习吗?(1 or 0 ?)\n");
	scanf("%d", &a);
	if (a == 1)                //初识选择语句  if else
		printf("好offer\n");
	else
		printf("烤红薯\n");
	return 0;
}