// Valid Parentheses

#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin >> s;

    int n = s.length();

    stack<int>st;
    for(int i=0; i<n; i++){
        if(
            s[i] == '(' ||
            s[i] == '[' ||
            s[i] == '{' 
        ){
            st.push(s[i]);
        }
        else{
            if(
                ( s[i] == '(' && st.top()==')') ||
                ( s[i] == '[' && st.top()==']') ||
                ( s[i] == '{' && st.top()=='}')
            ){
                st.pop();
            }
            else{
                cout << "not valid ";
                return 0;
            }
        }
    }

    if(!st.empty()){
        cout << "not valid ";
    }
    else{
        cout << "valid..... ";
    }

    return 0;
}