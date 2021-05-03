/*
C++中利用new操作符在堆区开辟数据
堆区开辟的数据，由程序员手动开辟，手动释放，释放利用操作符delete
语法:new 数据类型
利用new创建的数据，会返回该数据对应的类型的指针
*/
#include <iostream>

using namespace std;
//new的基本语法
int* func()
{
	//在堆区创建整型数据
	//new返回的是 该数据类型的指针
	int* p = new int(10);
	return p;
}


void test01()
{
	int* p = func();

	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;

	// 堆区的数据由程序员管理开辟，程序员管理释放
	//如果想释放堆区的数据，利用关键字delete

	delete p;
	//cout << *p << endl;//内存己经被释放，再次访问就是非法操作，会报错
}

//2.在堆区开辟数组
void test02()
{
	//创建10整型数据的数组，在堆区
	int* array=new int[10];

	for (int i = 0; i < 10; i++)
	{
		array[i] = i + 100;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << array[i] << endl;
	}
	//释放数组
	//释放数组的时候要加[]才可以
	delete[] array;
}
int main()
{
//	test01();
	test02();
	return 0;
}