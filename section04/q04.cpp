// ユークリッド互除法による最大公約数

#include <bits/stdc++.h>
using namespace std;

int GCD(int m, int n) {
  if (n == 0) return m;

  return GCD(n, m % n);
}

int main() {
  cout << GCD(51, 15) << endl;
  cout << GCD(15, 51) << endl;

  return 0;
}
