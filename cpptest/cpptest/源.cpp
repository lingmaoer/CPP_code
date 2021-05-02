/*
问题描述
    个序列，每次询问序列中第 l 个数到第 r 个数中第 K 大的数是哪个。

输入格式
    第一行包含一个数 n，表示序列长度。

    第二行包含 n 个正整数，表示给定的序列。

    第三个包含一个正整数 m，表示询问个数。

    接下来 m 行，每行三个数 l,r,K，表示询问序列从左往右第 l 个数到第 r 个数中，从大往小第 K 大的数是哪个。序列元素从 1 开始标号。

输出格式
    出 m 行，每行一个数，表示询问的答案。
样例输入
    5
    1 2 3 4 5
    2
    1 5 2
    2 3 2
样例输出
    4
    2
数据规模与约定
    对于 30% 的数据，n,m<=100；

    对于 100% 的数据，n,m<=1000；

    保证 k<=(r-l+1)，序列中的数 <=10^6。
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
