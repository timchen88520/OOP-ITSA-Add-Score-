#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>

typedef long long lint;
using namespace std;
int main() {
  int a[5];
  int n = 3;
  for (int i = 0; i < n; i++) cin >> a[i];  // scanf("%d",&a[i]);
  sort(a, a + n);
  if (a[0] + a[1] > a[2]) {
    if (a[0] * a[0] + a[1] * a[1] > a[2] * a[2])
      cout << "acute" << endl;  // printf("acute\n");
    else if (a[0] * a[0] + a[1] * a[1] == a[2] * a[2])
      cout << "right" << endl;  // printf("right\n");
    else if (a[0] * a[0] + a[1] * a[1] < a[2] * a[2])
      cout << "obtuse" << endl;
    // printf("obtuse\n");
  } else {
    cout << "invalid" << endl;
    // printf("invalid\n");
  }
  return 0;
}
