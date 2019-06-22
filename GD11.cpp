#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>

typedef long long lint;
using namespace std;
int main() {
  lint n;
  while (cin >> n) {
    // while(scanf("%lld",&n)!=EOF){
    n = n * 37119 / 10000;
    lint a[15];
    memset(a, 0, sizeof(a));
    a[9] = n / 10000;
    n %= 10000;
    a[8] = n / 5000;
    n %= 5000;
    a[7] = n / 2000;
    n %= 2000;
    a[6] = n / 1000;
    n %= 1000;
    a[5] = n / 500;
    n %= 500;
    a[4] = n / 100;
    n %= 100;
    a[3] = n / 50;
    n %= 50;
    a[2] = n / 10;
    n %= 10;
    a[1] = n / 5;
    n %= 5;
    a[0] = n;
    n %= 1;
    cout << a[0];
    // printf("%d", a[0]);
    for (int i = 1; i < 10; i++) cout << a[i];  // printf(" %d", a[i]);
    cout << endl;
  }
  return 0;
}
