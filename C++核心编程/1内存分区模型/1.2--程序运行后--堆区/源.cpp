/*
������
	�ɳ���Ա�����ͷ�,������Ա���ͷ�,�������ʱ�ɲ���ϵͳ����
	��C++����Ҫ����new�ڶ��������ڴ�
*/

#include <iostream>

using namespace std;
int* func()
{
	//����new�ؼ��ֿ��Խ����ݿ��ٵ�����
	//ָ�뱾��Ҳ�Ǿֲ�����������ջ�ϣ�ָ�뱣��������Ƿ��ڶ���int *p =new int (10) ;

	int* p = new int(10);
	return p;
}

int main()
{
	//�ڶ�����������int *p = func() ;
	int* p = func();

	cout << *p << endl;
	cout << *p << endl;
	return 0;
}
/*
�ܽ�:
	���������ɳ���Ա�����ٺ��ͷ�
	������������new�ؼ��ֽ��п����ڴ�
*/