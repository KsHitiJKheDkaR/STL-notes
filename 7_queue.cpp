#include <bits/stdc++.h>
using namespace std;

// methods: emplace() pop() front() size() empty() swap()

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    queue<int> q;

    q.emplace(1);
    q.emplace(2);
    q.emplace(3);

    cout << q.front() << '\n';

    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
    cout << '\n';
    return 0;
}