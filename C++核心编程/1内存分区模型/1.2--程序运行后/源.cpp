/*
栈区:
	由编译器自动分配释放,存放函数的参数值,局部变量等
	注意事项:不要返回局部变量的地址，栈区开辟的数据由编译器自动释放
*/

#include <iostream>

using namespace std;
int* func(int b)//形参也放在栈区
{
	b = 100;
	int a = 10;//局部变量存放在栈区，栈区的数据在函数执行完后自动释放
	return &a;//返回局部变量的地址
}

int main()
{
	//接受func函数的返回值
	int *p=func(1);

	cout << *p << endl;// 第一次可以打印正确的数字，是因为编译器做了保留
	cout << *p << endl;//第二滋这个数据就不再保留了

	return 0;
}

