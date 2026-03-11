#include <bits/stdc++.h>
using namespace std;

// all methods : push() emplace() count() erase() find()

// best map to use for practical use
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);


    // Time Complexity : O(1) 
    // doesnt allow duplicate insertion of eles & isnt sorted 
    // implements self balancin tree internally
    
    unordered_map<string,int> m;

    m.emplace("tv",100);
    m.emplace("tv",100);
    m.emplace("tv",100);
    m.emplace("tv",100);

    for(auto ele : m) cout << ele.first << " " << ele.second << '\n';
    cout << '\n';

    m.emplace("tv",100);
    m.emplace("phone",100);
    m.emplace("car",100);
    m.emplace("fan",100);

    for(auto ele : m) cout << ele.first << " " << ele.second << '\n';
    cout << '\n';
    return 0;
}