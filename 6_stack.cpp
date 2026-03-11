#include <bits/stdc++.h>
using namespace std;

// stack : Last In First Out Data Structure

// methods: emplace() pop() front() size() empty() swap()

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    stack<int> s;

    s.emplace(1);
    s.emplace(2);
    s.emplace(3);

    cout << s.top() << '\n';

    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
    cout << '\n';


    s.emplace(1);
    s.emplace(2);
    s.emplace(3);

    stack<int> s2;

    s2.emplace(10);
    s2.emplace(20);
    s2.emplace(30);

    cout << '\n';

    s2.swap(s);


    cout << "size of s2: " << s2.size() << '\n';
    cout << "size of s: " << s.size() << '\n';
    cout <<"All eles of s2: ";

    while(!s2.empty()){
        cout << s2.top() << " ";
        s2.pop();
    }
    cout << '\n';

    cout <<"All eles of s: ";

    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
    cout << '\n';
    
    return 0;
}