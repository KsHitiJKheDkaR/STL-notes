#include <bits/stdc++.h>
using namespace std;


// Time Complexity : O(logn)

// methods : emplace() erase() count() size() empty()

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);



    // allows duplicate insertion of keys but not allows m[key] = value;
    // also if you erase(key) then all the duplicate keys too will be erase hence we use erase(m.find(key)) & hence we only delete a single copy out of all rest of duplicates.
    
    multimap<string,int> m;

    m.emplace("tv",100);
    m.emplace("tv",100);
    m.emplace("tv",100);
    m.emplace("tv",100);

    for(auto ele : m){
        cout << ele.first << " " << ele.second << '\n';
    }
    cout << '\n';

    m.erase("tv"); // erases all duplicates & original key too
    for(auto ele : m){
        cout << ele.first << " " << ele.second << '\n';
    }
    cout << '\n';

    m.emplace("tv",100);
    m.emplace("tv",100);
    m.emplace("tv",100);
    m.emplace("tv",100);

    m.erase(m.find("tv")); // only one copy of tv will be deleted not all tv keys

    for(auto ele : m){
        cout << ele.first << " " << ele.second << '\n';
    }
    cout << '\n';
    return 0;
}