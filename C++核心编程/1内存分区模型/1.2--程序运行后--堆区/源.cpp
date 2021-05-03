/*
堆区：
	由程序员分配释放,若程序员不释放,程序结束时由操作系统回收
	在C++中主要利用new在堆区开辟内存
*/

#include <iostream>

using namespace std;
int* func()
{
	//利用new关键字可以将数据开辟到堆区
	//指针本质也是局部变量，放在栈上，指针保存的数据是放在堆区int *p =new int (10) ;

	int* p = new int(10);
	return p;
}

int main()
{
	//在堆区开辟数据int *p = func() ;
	int* p = func();

	cout << *p << endl;
	cout << *p << endl;
	return 0;
}
/*
总结:
	堆区数据由程序员管理开辟和释放
	堆区数据利用new关键字进行开辟内存
*/