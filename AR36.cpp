#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>

using namespace std;
int main() {
  int n, m, c;
  // while(scanf("%d%d%d",&n,&m,&c)!=EOF){
  while (cin >> n >> m >> c) {
    int a[n + 5][m + 5], t;
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
    for (int j = 0; j < m; j++) {
      for (int i = 0; i < n; i++) {
        cout << a[i][j] * c;
        // printf("%d",a[i][j]*c);
        if (i != n - 1) cout << " ";  // printf(" ");
      }
      cout << endl;
      // printf("\n");
    }
  }
  return 0;
}
