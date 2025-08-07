#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int main(){
    int n;
    while(cin >> n && n){
        // min-heap
        priority_queue<int, vector<int>, greater<int>> pq;
        long long int total = 0;
        while(n--){
            int num;
            cin >> num;
            pq.push(num);
        }
        while(pq.size() > 1){
            int a = pq.top();
            pq.pop();
            int b = pq.top();
            pq.pop();
            int sum = a + b;
            total += sum;
            pq.push(sum);
        }
        cout << total << "\n";
    }
}