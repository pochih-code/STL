#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int main(){
    int n;
    set<int> s;
    cin >> n;
    for(int i=0; i<n; i++){
        int num;
        cin >> num;
        s.insert(num);
    }
    cout << s.size() << "\n";
}