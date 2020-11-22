// 再帰を用いた全探索による部分和問題

#include <bits/stdc++.h>
using namespace std;

int tribo(int n){
    if(n == 0) return 0;
    if(n == 1) return 0;
    if(n == 2) return 1;

    return tribo(n-1) + tribo(n-2) + tribo(n-3);
}

int main(){
    int N;
    cin >> N;

    cout << tribo(N) << endl;

    return 0;
}
