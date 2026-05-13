// Valid Anagram

#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin >> s;

    int n = s.length();

    map<char,int>mp;
    for(int i=0; i<n; i++){
        mp[s[i]]++;
    }

    for( auto x: mp){
        if(x.second == 1){
            cout << "First Non-Repeating Character: " << x.first << endl;
            return  0;
        }
    }
    
    cout << "there is no First Non-Repeating Character" << endl;
    
    return 0;

}