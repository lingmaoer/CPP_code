/*
C++������new�������ڶ�����������
�������ٵ����ݣ��ɳ���Ա�ֶ����٣��ֶ��ͷţ��ͷ����ò�����delete
�﷨:new ��������
����new���������ݣ��᷵�ظ����ݶ�Ӧ�����͵�ָ��
*/
#include <iostream>

using namespace std;
//new�Ļ����﷨
int* func()
{
	//�ڶ���������������
	//new���ص��� ���������͵�ָ��
	int* p = new int(10);
	return p;
}


void test01()
{
	int* p = func();

	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;

	// �����������ɳ���Ա�����٣�����Ա�����ͷ�
	//������ͷŶ��������ݣ����ùؼ���delete

	delete p;
	//cout << *p << endl;//�ڴ漺�����ͷţ��ٴη��ʾ��ǷǷ��������ᱨ��
}

//2.�ڶ�����������
void test02()
{
	//����10�������ݵ����飬�ڶ���
	int* array=new int[10];

	for (int i = 0; i < 10; i++)
	{
		array[i] = i + 100;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << array[i] << endl;
	}
	//�ͷ�����
	//�ͷ������ʱ��Ҫ��[]�ſ���
	delete[] array;
}
int main()
{
//	test01();
	test02();
	return 0;
}