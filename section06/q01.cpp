// 配列から目的の値を探索する二分探索法
#include <bits/stdc++.h>
using namespace std;

const long long INF = 1LL << 60; // 十分大きい値
const int N = 8;
const vector<int> a = {3, 5, 8, 10, 14, 17, 21, 39};

int binary_search(int key)
{
    int left = 0;
    int right = (int)a.size() - 1;

    while (right >= left)
    {
        int mid = left + (right - left) / 2;
        if (a[mid] == key)
            return mid;
        else if (a[mid] > key)
            right = mid - 1;
        else if (a[mid] < key)
            left = mid + 1;
    }

    return -1;
}

int main()
{
    cout << binary_search(10) << endl;
    cout << binary_search(3) << endl;
    cout << binary_search(39) << endl;
    cout << binary_search(-100) << endl;
    cout << binary_search(9) << endl;
    cout << binary_search(100) << endl;

    return 0;
}
