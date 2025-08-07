#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int main(){
    int n, a, b;
    while(cin >> n){
        priority_queue<pair<int, int>> pq;
        while(n--){
            cin >> a >> b;
            pq.push(make_pair(b, a));
        }
        int ans = 0;
        int total = 0;
        while(!pq.empty()){
            total += pq.top().second;
            ans = max(ans, total + pq.top().first);
            pq.pop();
            // 3 12
            // 8 11
            // 12 14
        }
        cout << ans << "\n\n";
    }
    return 0;
}