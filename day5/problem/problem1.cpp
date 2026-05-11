// problem/problem.cpp

#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    getline(cin,s);

    int n = s.length();

    stack<int>st;
    for(int i=0; i<n; i++){
        st.push(s[i]);
    }

    cout<< "Reverse string: ";
    while(!st.empty()){
        cout<< st.top();
        st.pop():
    }

    return 0;
}