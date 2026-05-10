// frquency of char

#include<bits/stdc++.h>
using namespace std;

int main(){

    map<char,int>mp;

    string s;
    cout << "Enter string: ";
    getline(cin,s);
        
    int n =s.length();
    for(int i=0; i<n; i++){
        mp[s[i]]++;
    }

    for(auto x: mp){
        cout << x.first << " -> " << x.second << endl;
    }

    return 0;
}