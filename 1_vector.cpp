#include <bits/stdc++.h>
using namespace std;

// methods : push_back() emplace_back() pop_back() size() front() back() .begin() .end() .clear() .empty() .erase() .insert()


int main() {
    
    vector<int> v; 

    v.push_back(1);  // not safe
    v.emplace_back(2); // more safe
    v.emplace_back(3);
    v.emplace_back(4);
    v.emplace_back(5);

    cout << "Initial vector v: ";
    for (int x : v) cout << x << " ";
    cout << "\nSize: " << v.size() << " | Capacity: " << v.capacity() << "\n\n";

    v.pop_back(); 

    cout << "After pop_back: ";
    for (int x : v) cout << x << " ";
    cout << "\nElement at index 1: " << v[1]; 
    cout << "\nElement at index 1 (using .at()): " << v.at(1); 
    cout << "\nFront: " << v.front() << " | Back: " << v.back() << "\n\n";

    vector<int> v2 = {10, 20, 30, 40, 50}; 
    vector<int> v3(3, 10);                
    vector<int> v4(v3);                  

    v2.erase(v2.begin()); 
    
    v2.erase(v2.begin() + 2); 

    cout << "v2 after specific erasures: ";
    for (int x : v2) cout << x << " ";
    cout << "\n";

    v2.insert(v2.end(), {60, 70, 80, 90}); 
    
    cout << "v2 before range erase: ";
    for (int x : v2) cout << x << " ";
    
    v2.erase(v2.begin(), v2.begin() + 3);

    cout << "\nv2 after range erase: ";
    for (int x : v2) cout << x << " ";

    v2.insert(v2.begin() + 1, 100);
    cout << "\nv2 after inserting 100 at index 1: ";
    for (int x : v2) cout << x << " ";
    cout << "\n\n";

    v2.clear();
    cout << "v2 after clear() -> Size: " << v2.size() << ", Capacity: " << v2.capacity() << "\n";
    cout << "Is v2 empty? " << (v2.empty() ? "Yes" : "No") << "\n";

    return 0;
}