#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#define ll long long
using namespace std;

int main(){
    ll int n;
    ll int m = 0;
    while(cin>>n){
        m++;
        vector<ll int> v;
        set<ll int> s;
        bool flag = true;

        for(int i=0; i<n; i++){
            ll int num;
            cin >> num;
            v.push_back(num);
        }
        for(int i=0; i<n; i++){
            // [0] + [1] == [1] + [0] so i=0, j=i
            for(int j=i; j<n; j++){
                ll int temp = v[i] + v[j];
                int check = s.count(temp);
                if(check>0){
                    flag = false;
                    break;
                }
                s.insert(temp);            
            }
            if(flag==false){
                break;
            }
        }
        if(flag==true){
            cout << "Case #" << m << ": It is a B2-Sequence." << "\n\n";
        }
        else{
            cout << "Case #" << m << ": It is not a B2-Sequence." << "\n\n";
        }
    }
    return 0;
}