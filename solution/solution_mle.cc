#include <algorithm>
#include <vector>
#include <cstdio>
int ar[1010101];
int main() {
    std::vector < std::vector < int > > w;
    for (volatile int i = 10000; i--; ) {
        std::vector < int > v(10101010);
        w.push_back(v);
    }
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) scanf("%d", ar + i);
    std::sort(ar, ar + n);
    for (int i = 0; i < n; ++i) printf("%d\n", ar[i]);
    return 0;
}
