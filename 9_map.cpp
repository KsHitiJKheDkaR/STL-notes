#include <bits/stdc++.h>
using namespace std;

// map: key value pair

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // Time Complexity : O(logn)

    // Sorted lexico-graphically or ascending order , keys are always unique
    map<string,int> m;

    m["kshitij"] = 20;
    m["harshal"] = 44;
    m["jivan"] = 49;

    for(auto ele : m){
        cout << ele.first << " " << ele.second << '\n';
    }
    cout << '\n';

    m.emplace("devang",25);

    for(auto x : m){
        cout << x.first << " " << x.second << '\n';
    }
    cout << '\n';

    cout << "count : " << m.count("kshitij") << '\n';
    cout <<"value: " << m["kshitij"] << '\n';
    cout << '\n';

    // if key is found then it returns iterator of that address or else returns .end() for not found
    auto it = m.find("kshitij");
    
    if(m.find("ksh") != m.end()){
        cout << "found!\n";
        cout << it->first << " " << it->second << '\n';
    }else{
        cout <<"NOT found!\n";
    }

    cout << m.size() << '\n';
    cout << m.empty() << '\n';
    return 0;
}