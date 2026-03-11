#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> v = {10, 20, 30, 40, 50};

    cout << "Forward: ";
    for (auto it = v.begin(); it != v.end(); ++it) {
        cout << *it << " ";
    }
    cout << '\n';

    cout << "Reverse: ";
    for (auto it = v.rbegin(); it != v.rend(); ++it) {
        cout << *it << " ";
    }
    cout << '\n';

    auto it = find(v.begin(), v.end(), 30);
    if (it != v.end()) {
        cout << "Found 30 at index: " << distance(v.begin(), it) << '\n';
    }

    return 0;
}