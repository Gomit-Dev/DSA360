// valid Parentheses

#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin >> s;

    int n = s.length();

    stack<char>st;
    for(int i=0; i<n; i++){
        if(
            ( s[i] == '(' ) ||
            ( s[i] == '{' ) ||
            ( s[i] == '[' )
        ){
            st.push(s[i]);
            cout << st.top() << endl;
        }
        else{
            if(st.empty()){
                cout << "Invalid.....";
                return 0;
            }
            if(
                ( s[i] == ')' && st.top()=='(' ) ||
                ( s[i] == '}' && st.top()=='{' ) ||
                ( s[i] == ']' && st.top()=='[' )
            ){
                st.pop();
            }
            else{
                cout << "Invalid.....";
                return 0;
            }
        }
    }

    if(!st.empty()){
        cout << "Invalid.....";
    }
    else{
        cout << "Valid.....";
    }

    return 0;
}