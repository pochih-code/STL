#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

// In the end, check whether the stack is empty
// '()' or '[]' is char
int main(){
    stack<char> st;
    string str;
    bool isvaild = true;
    cin >> str;
    for(auto i : str){
        if (i == '(' || i == '['){
            st.push(i);
        }
        else if (i == ')' || i == ']') {
            if (st.empty()){
                isvaild = false;
                break;
            }
            else if (i == ')' && st.top() != '(' || i == ']' && st.top() != '['){
                isvaild = false;
                break;
            }
            else{
                st.pop();
            }
        }
    }
    if (st.empty() != 0){
        isvaild == false;
    }
    if (isvaild == false){
        cout << "Wrong\n";
    }
    else {
        cout << "Right\n";
    }
    return 0;
}