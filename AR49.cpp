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
    int t, sum = 0;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        scanf("%d", &t);
        if (i == j) sum += t;
      }
    }
    cout << sum << endl;
    // printf("%d\n", sum);
  }
  return 0;
}
