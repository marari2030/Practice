#include<stdio.h>

/* int main()
{

	int i = 1;
	//在while循环中，break用于永久的终止循环
	//在while循环中，continue的作用是跳过本次循环continue后边的代码，直接去判断部分，看是否进行下一次循环

	while (i <= 10)
	{
  		if (i == 5)
			//break;
			continue;
		printf("%d ", i);
 		i++;
 	}

	return 0;
}*/

// EOF - end of file -- 文件结束标志
	// getchar是得到一个字符
	// putchar是输出一个字符
int main()
{
	int ch = 0;

	// ctry+z - getchar 就读取结束
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}
	return 0;
}
