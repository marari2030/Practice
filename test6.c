//C语言提供的关键字
//1.C语言提供的，不能自己创建关键字
//变量名不能是关键字
// auto break  case 

int main()
{
	// auto 是自动的-每个局部变量都是auto修饰的
	//extern 是用来申明外部符号的
	//register 寄存关键字

	//大量、频繁被使用的数据，放在寄存器中，提升效率
	register int num = 100;  //建议num的值存放在寄存器中
	//计算机中数据可以存储到哪里呢？     寄存器、高速缓存、内存、硬盘、网盘      （造价越高，速度越快，空间越小）
	// static  静态的    union 联合体（共用体）  
	// define 和 include 不是关键字，是预处理指令
	return 0;
}
