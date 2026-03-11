#include <bits/stdc++.h>
using namespace std;

// binary tree(maxHeap,minHeap) is being implemented internally in pq
// methods: emplace() pop() top() size() empty() swap()

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);


    priority_queue<int> pq; // largest ele is always on top , and queue is sorted

    pq.emplace(7);
    pq.emplace(12);
    pq.emplace(3);
    pq.emplace(5); 

    cout << pq.top() << '\n';

    while(!pq.empty()){
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << '\n';
    cout << '\n';
    
    priority_queue<int,vector<int>,greater<int>> pq2; // here always lowest ele will be on top & quque will be sorted

    pq2.emplace(7);
    pq2.emplace(12);
    pq2.emplace(3);
    pq2.emplace(5); 

    cout << pq2.top() << '\n';
    while(!pq2.empty()){
        cout << pq2.top() << " ";
        pq2.pop();
    }
    cout << '\n';
    return 0;
}