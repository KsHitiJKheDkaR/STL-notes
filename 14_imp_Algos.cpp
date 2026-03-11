#include <bits/stdc++.h>
using namespace std;

// Custom comparator for pairs
bool comparator(pair<int,int> p1, pair<int,int> p2) {

    // If second elements are different, sort by second
    if(p1.second != p2.second) return p1.second < p2.second;
    
    // Otherwise, sort by first
    return p1.first < p2.first;
}

int setBits(int n) {
    int count = 0;

    while(n > 0) {
        n &= (n-1);
        ++count;
    }

    return count;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // Sorting an Array
    int arr[] = {3, 5, 8, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    sort(arr, arr + n);

    cout << "Array sorted in ascending order: ";
    for(auto ele : arr) cout << ele << " ";
    cout << '\n';

    // Vector
    vector<int> v = {10, 4, 7, 12, 2};
    sort(v.begin(), v.end());

    cout << "Vector sorted in ascending order: ";
    for(auto ele : v) cout << ele << " ";
    cout << '\n';

    // Sorting in descending order
    sort(arr, arr + n, greater<int>());
    cout << "Array sorted in descending order: ";
    for(int x : arr) cout << x << " ";
    cout << '\n';

    // Sorting vector of pairs using custom comparator
    vector<pair<int,int>> p = {{5, 2}, {3, 4}, {1, 2}};
    
    // FIX: Apply comparator to the pair vector 'p', not 'v'
    sort(p.begin(), p.end(), comparator);

    cout << "Vector of pairs sorted by second element:\n";
    for(auto ele : p) {
        cout << ele.first << " " << ele.second << '\n';
    }

    // Reversing
    vector<int> vec = {1, 2, 3, 4, 5};
    reverse(vec.begin(), vec.end());

    cout << "Reversed vector: ";
    for(int x : vec) cout << x << " ";
    cout << '\n';

    // next permutation 
    cout <<"Printin all permutations of string 'abc' : ";
    string str = "abc";
    for(int i = 0 ; i < 6 ; ++i) {
        next_permutation(str.begin(),str.end());
        cout << str << " ";
    }
    cout << '\n';

    // printin previous permutation
    cout<< "printin previous permutation of string abc: ";
    for(int i = 0 ; i < 6 ; ++i) {
        prev_permutation(str.begin(),str.end());
        cout << str << " ";
    }
    cout << '\n';
    cout << '\n';

    // swap,min,max

    cout << "min : " << min(4,5) << '\n';
    cout <<"max : " << max(4,5) << '\n';

    int a = 6;
    int b = 7;

    cout <<"swappin two numbers: "<< '\n';
    cout << "a : " << a << ", b : " << b << '\n';    
    swap(a,b);
    cout << "a : " << a << ", b : " << b << '\n';
    cout << '\n';

    // findin max & min ele of an Vector

    vector<int> v2 = {1,2,3,4,5};

    int maxEle = *max_element(v2.begin(),v2.end());
    int minEle = *min_element(v2.begin(),v2.end());

    cout <<"Vector : ";
    for(int x : v2) cout << x << " ";
    cout << '\n';
    cout << "max: " << maxEle << '\n';
    cout << "min: " << minEle<< '\n';
    cout << '\n';

    // binary search

    int target = 5;
    cout <<"binary search for target: " << target << '\n';
    cout << "target is present at idx: " << binary_search(v2.begin(),v2.end(),target) << '\n'; // returns 1 as true if target present or else 0
    cout << '\n';

    // countin set bits

    int num = 15;


    cout <<"Countin set bits for number: " << num<< '\n';
    cout << "count: " << setBits(num) << '\n';
    return 0;
}