#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;

    for (int i=1; i<=n; i++){
        vector<pair<string, int>> v;

        int max = -1;

        for(int j=0; j<10; j++){
            string url;
            int val;
            cin >> url >> val;
            if (val > max){
                max = val;
            }
            v.emplace_back(make_pair(url, val));
        }

        cout << "Case #" << i << ":\n";

        for (auto i : v){
            if (i.second == max){
                cout << i.first << "\n";
            }
        }
    }
    return 0;
}