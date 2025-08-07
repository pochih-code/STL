#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<pair<int, int>> v;
    for (int i=0; i<n; i++){
        int x, y;
        cin >> x >> y;
        v.emplace_back(make_pair(x, y));
    }
    sort(v.begin(), v.end());
    for(auto i : v){
        cout << i.first << " " << i.second << "\n";
    }
}