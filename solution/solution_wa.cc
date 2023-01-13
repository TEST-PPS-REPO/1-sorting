#include <algorithm>
#include <cstdio>
int ar[101010];
int main() {
  int n;
  scanf("%d", &n);
  for (int i = 0; i < n; ++i) scanf("%d", ar + i);
  std::sort(ar, ar + n);
  for (int i = 0; i < n - 1; ++i) printf("%d\n", ar[i]);
}