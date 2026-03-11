#include <bits/stdc++.h>
using namespace std;


// Deque : is internally implemented as Dynamic Arrays hence it allows randome access of eles while list doesnt allow random access 


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    deque<int> d;

    d.emplace_back(1);
    d.emplace_front(2);
    d.emplace_back(3);
    d.emplace_back(4);

    for(int x : d) cout << x << " ";
    cout << '\n';

    d.pop_back();
    d.pop_front();

    for(int x: d) cout << x << " ";
    cout << '\n';

    cout << "ele at index2: " << d[2] << '\n';
    return 0;
}