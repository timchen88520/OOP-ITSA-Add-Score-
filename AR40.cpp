#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>

typedef long long lint;
using namespace std;
int main() {
  int n;
  // while(scanf("%d",&n)!=EOF){
  while (cin >> n) {
    int t, now = 0;
    lint ans = 0;
    for (int i = 0; i < n; i++) {
      cin >> t;
      // scanf("%d",&t);
      ans += min(abs(t - now), min(t - now + 10, now + 10 - t));
      now = t;
    }
    cout << "Minimal summation of swinging degrees is " << ans * 36 << endl;
  }
  return 0;
}
