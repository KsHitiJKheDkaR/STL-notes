#include <bits/stdc++.h>
using namespace std;

// Time Complexity: O(logn)
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);


    set<int> s;

    s.emplace(1);
    s.emplace(2);
    s.emplace(3);
    s.emplace(4);
    s.emplace(5);

    for(auto ele : s) cout << ele << " ";
    cout << '\n';

    // lower_bound : if present then return the ele iterator else if not then return just one ele greater than passed value iterator & if no value is greater than passed value then it returns .end().

    // upper_bound : ele iterator returned will be always greater than the  value passed not even equal to.

    cout << *(s.lower_bound(4)) << '\n';
    cout << '\n';

    s.erase(4);
    s.erase(5);


    if(s.lower_bound(4 ) == s.end()){
        cout <<"No ele greater than or equal to 4!\n";
    }
    return 0;
}