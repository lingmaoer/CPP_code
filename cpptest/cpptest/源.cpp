/*
��������
    �����У�ÿ��ѯ�������е� l �������� r �����е� K ��������ĸ���

�����ʽ
    ��һ�а���һ���� n����ʾ���г��ȡ�

    �ڶ��а��� n ������������ʾ���������С�

    ����������һ�������� m����ʾѯ�ʸ�����

    ������ m �У�ÿ�������� l,r,K����ʾѯ�����д������ҵ� l �������� r �����У��Ӵ���С�� K ��������ĸ�������Ԫ�ش� 1 ��ʼ��š�

�����ʽ
    �� m �У�ÿ��һ��������ʾѯ�ʵĴ𰸡�
��������
    5
    1 2 3 4 5
    2
    1 5 2
    2 3 2
�������
    4
    2
���ݹ�ģ��Լ��
    ���� 30% �����ݣ�n,m<=100��

    ���� 100% �����ݣ�n,m<=1000��

    ��֤ k<=(r-l+1)�������е��� <=10^6��
*/

#include <iostream>
using namespace std;
#define N 1001

int cal(int num[N], int l, int r, int k);
int main()
{
    int n, m, num[N];
    int l[N], r[N], k[N];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> num[i];
    cin >> m;

    for (int i = 0; i < m; i++)
        cin >> l[i] >> r[i] >> k[i];

    for (int i = 0; i < m; i++)
        cout << cal(num, l[i], r[i], k[i]) << endl;
    return 0;
}

int cal(int num[], int l, int r, int k)
{
    int temp[N];
    int count1 = 0;
    for (int i = l-1; i <= r-1; i++)
        temp[count1++] = num[i];

    for (int i = 0; i < count1; i++)
        for (int j = 0; j < count1 - 1; j++)
        {
            if (temp[j] < temp[j + 1])
            {
                int t = temp[j];
                temp[j] = temp[j + 1];
                temp[j + 1] = t;
            }
        }

    return temp[k - 1];
}
