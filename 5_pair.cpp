#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    pair<int, int> p = {1, 2};
    cout << p.first << " " << p.second << '\n';

    pair<string, int> p2 = {"kshitij", 20};
    cout << p2.first << " " << p2.second << '\n';

    pair<int, pair<int, int>> p3 = {1, {2, 3}};
    cout << p3.first << " " << p3.second.first << " " << p3.second.second << '\n';
    cout << '\n';

    vector<pair<int, int>> p4 = {{1, 2}, {3, 4}, {5, 6}};
    for (auto ele : p4) cout << ele.first << " " << ele.second << '\n';
    cout << '\n';

    p4.emplace_back(7,8);

    for(auto ele : p4) cout << ele.first << " " << ele.second << '\n';

    
    return 0;
}