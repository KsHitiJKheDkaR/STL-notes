// list : is implemented as doubly linked list internally
// list doesnt allow random access of eles

#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);


    list<int> l;

    l.emplace_back(1);
    l.emplace_front(2);
    l.emplace_back(3);
    l.emplace_back(4);

    for(int x : l) cout << x << " ";
    cout << '\n';

    l.pop_back();
    l.pop_front();

    for(int x: l) cout << x << " ";
    cout << '\n';

    cout << l.front() << '\n';
    cout << l.size() << '\n';
    cout << '\n';


    cout << l.front() + 1 << '\n';
    return 0;
}