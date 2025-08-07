#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int main(){
    int n;
    int num;
    set<int> s;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> num;
        s.insert(num);
    }
    cout << s.size() << "\n";
    for(auto i : s){
        cout << i << " ";
    }
    return 0;
}