#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int mnNumberOfSteps = (n + 2 - 1) / 2;
    int mxNumberOfSteps = n;
    /*
     * the answer must be a multiple of m
     * and the answer will lie in this range [mn#Steps:mx#Step]
     */
    int factor = (mnNumberOfSteps + m - 1) / m;
    int multipleOfmAsNumberOfSteps = factor * m;

    if (multipleOfmAsNumberOfSteps > n) cout << "-1\n";
    else cout << multipleOfmAsNumberOfSteps << '\n';
    return 0;
}
