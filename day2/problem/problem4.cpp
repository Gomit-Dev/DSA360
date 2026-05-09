// reverse each word of string

#include<bits/stdc++.h>
using namespace std;

int main(){
    
    string s;
    getline(cin,s);

    int n = s.length();

    int l = 0;
    for(int i=0; i<n; i++){
        if( s[i] == ' ' ){
            reverse(s.begin()+l, s.begin()+i);
            l=i+1;
        }
    }
    reverse(s.begin()+l, s.end());

    cout << "Result: "<< s;

    return 0;
}