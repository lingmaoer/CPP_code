/*
1.1程序运行前


在程序编译后，生成了exe可执行程序，未执行该程序前分为两个区域
	代码区:
		存放CPU执行的机器指令
		代码区是共享的，共享的目的是对于频繁被执行的程序，只需要在内存中有一份代码即可
		代码区是只读的，使其只读的原因是防止程序意外地修改了它的指令
	全局区:
		全局变量和静态变量存放在此.
		全局区还包含了常量区,字符串常量和其他常量也存放在此.
		该区域的数据在程序结束后由操作系统释放

*/

#include <iostream>

using namespace std;
//全局变量
int g_a = 20;
int g_b = 20;

const int g_c_a = 10;
const int g_c_b = 20;
int main()
{
	//全局区

	//全局变量，静态变量，常量

	//创建局部变量
	int a = 10;
	int b = 10;
	cout << "局部变量a的地址为： " << (int)&a << endl;
	cout << "局部变量b的地址为： " << (int)&b << endl;
	cout << "全局变量g_a的地址为： " << (int)&g_a << endl;
	cout << "全局变量g_b的地址为： " << (int)&g_b << endl;

	//静态变量
	static int s_a = 10;
	static int s_b = 10;
	cout << "静态变量s_a的地址为： " << (int)&s_a << endl;
	cout << "静态变量s_b的地址为： " << (int)&s_b << endl;

	//字符串常量
	cout << "字符串常量的地址为： " << (int)&"hello eorld" << endl;

	//const修饰的变量
	//const修饰的全局变量，const修饰的局部变量
	cout << "全局常量g_c_a的地址为： " << (int)&g_c_a << endl;
	cout << "全局常量g_c_b的地址为： " << (int)&g_c_b << endl;

	//局部常量
	int c_a = 10;
	int c_b = 20;
	cout << "局部常量c_a的地址为： " << (int)&c_a << endl;
	cout << "局部常量c_b的地址为： " << (int)&c_b << endl;
	return 0;
}

/*
总结:
	C++中在程序运行勤分为全局区和代码区	
	代码区特点是共享和只读
	全局区中存放全局变量、静态变量、常量
	常量区中存放const修饰的全局常量和字符串常量
*/