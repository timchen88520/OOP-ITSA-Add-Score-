#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>

typedef long long lint;
using namespace std;
int gcd(int a, int b) {
  if (b == 0)
    return a;
  else
    return gcd(b, a % b);
}
int main() {
  int ncase;
  cin >> ncase;
  // scanf("%d",&ncase);
  while (ncase--) {
    int n, t;
    cin >> n;
    // scanf("%d",&n);
    int ma = -1, mi = 0x7f7f7f7f;
    for (int i = 0; i < n; i++) {
      cin >> t;
      // scanf("%d", &t);
      ma = max(ma, t);
      mi = min(mi, t);
    }
    cout << gcd(ma, mi) << endl;
    // printf("%d\n", gcd(ma, mi));
  }
  return 0;
}
