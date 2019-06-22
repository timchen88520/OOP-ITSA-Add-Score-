#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>

typedef long long lint;
using namespace std;
int main() {
  int n, m, t;
  // while(scanf("%d%d",&n,&m)!=EOF){
  while (cin >> n >> m) {
    int a[n + 5][m + 5];
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        cin >> a[i][j];
        // scanf("%d",&a[i][j]);
      }
    }
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        cin >> t;
        // scanf("%d",&t);
        a[i][j] += t;
      }
    }
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        cout << a[i][j];
        // printf("%d",a[i][j]);
        if (j != m - 1) cout << " ";  // printf(" ");
      }
      cout << endl;
      // printf("\n");
    }
  }
  return 0;
}
