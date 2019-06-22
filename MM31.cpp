#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>

typedef long long lint;
using namespace std;
int solve(int n) {
  if (n == 0) return 1;
  return n * solve(n - 1);
}
int main() {
  int ncase;
  cin >> ncase;
  // scanf("%d",&ncase);
  while (ncase--) {
    int n;
    cin >> n;
    // scanf("%d",&n);
    cout << solve(n) << endl;
    // printf("%d\n",solve(n));
  }
  return 0;
}
