#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>

typedef long long lint;
using namespace std;
int main() {
  int a, b;
  int sum = 0;
  for (int i = 0; i < 3; i++) {
    cin >> a >> b;
    // scanf("%d%d",&a,&b);
    sum += a * b;
  }
  cout << sum << endl;
  // printf("%d\n",sum);
  return 0;
}
