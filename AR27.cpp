#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>

using namespace std;
int main() {
  int n;
  // while(scanf("%d",&n)!=EOF){
  while (cin >> n) {
    bool a[n + 5];
    memset(a, false, sizeof(a));
    int t;
    for (int i = 0; i < n - 1; i++) {
      cin >> t;
      // scanf("%d",&t);
      a[t] = true;
    }
    for (int i = 1; i <= n; i++) {
      if (!a[i]) {
        cout << i << endl;
        ;
        // printf("%d\n",i);
        break;
      }
    }
  }

  return 0;
}
