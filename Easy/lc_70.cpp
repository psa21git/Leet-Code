#include <iostream>
using namespace std;

// check the pattern for n = 1 to n = 5 or 6 . U will see that the pattern is fibonacci.
int climbStairs(int n) {
    if (n<=3) return n;
    int a=2, b=3, c;
    for (int i=4; i<=n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}

int main() {
    int n;
    cin >> n;
    cout << climbStairs(n) << endl;
    return 0;
}

