// Balanced Brackets

#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin >>s;

    int n = s.length();

    stack<char>st;
    for(int i=0; i<n; i++){
        if(
            s[i] == '(' || 
            s[i] == '{' || 
            s[i] == '['  
        ){
            st.push(s[i]);
        }

        else{
        
            if(st.empty()){
                cout << "Not valid";
                return 0;
            }
            else if(
                s[i] == ')' && st.top() == '(' ||
                s[i] == '}' && st.top() == '{' ||
                s[i] == ']' && st.top() == '[' 
            ){
                st.pop();
            }
            else{
                cout << "Not valid";
                return 0;
            }
        }
    }

    if(!st.empty()){
        cout << "Not valid";
    }
    else{
        cout << "valid.....";
    }

    return 0;
}