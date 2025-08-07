#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

// common solution
int main(){
    int n;
    cin >> n;
    for (int i=0; i<n; i++){
        bool isvaild = true;
        int total = 0;
        string str;
        stack<char> st;
        cin >> str;

        for(auto i : str){
            if (i == '('){
                st.push(i);
            }
            else if (i == ')'){
                if (!st.empty() && st.top() == '('){
                    total++;
                    st.pop();
                }
                else{
                    isvaild = false;
                    break;
                }
            }
        }

        if (!st.empty()){
            isvaild = false;
        }

        if (isvaild == true){
            cout << total << "\n";
        }
        else {
            cout << '0' << "\n";
        }
        
    }
    return 0;
}
