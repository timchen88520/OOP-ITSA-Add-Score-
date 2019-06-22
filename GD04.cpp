#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>

typedef long long lint;
using namespace std;
struct job {
  int t, d;
};
bool cmp(job a, job b) {
  if (a.d == b.d) return a.t < b.t;
  return a.d < b.d;
}
int main() {
  int ncase;
  cin >> ncase;
  // scanf("%d",&ncase);
  while (ncase--) {
    int n;
    cin >> n;
    // scanf("%d",&n);
    job a[n + 5];
    for (int i = 0; i < n; i++) {
      cin >> a[i].t;
      // scanf("%d",&a[i].t);
    }
    for (int i = 0; i < n; i++) {
      cin >> a[i].d;
      // scanf("%d",&a[i].d);
    }
    sort(a, a + n, cmp);
    int sum = 0;
    int i;
    for (i = 0; i < n; i++) {
      sum += a[i].t;
      if (sum > a[i].d) {
        cout << "No" << endl;
        // printf("No\n");
        break;
      }
    }
    if (i == n) cout << "Yes" << endl;  // printf("Yes\n");
  }
  return 0;
}
