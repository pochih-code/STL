#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(pair<pair<int, int>, int> &a, pair<pair<int, int>, int> &b){
    return a.second > b.second;
}

int main(){
    int n;
    cin >> n;
    // ((attack, defense), power)
    vector<pair<pair<int, int>, int>> v(n);
    for (int i=0; i<n; i++){
        int att, def, power;
        cin >> att >> def;
        power = att * att + def * def;
        v[i] = make_pair(make_pair(att, def), power);
    }
    sort(v.begin(), v.end(), cmp);
    cout << v[1].first.first << " " << v[1].first.second << "\n";
    return 0;
}