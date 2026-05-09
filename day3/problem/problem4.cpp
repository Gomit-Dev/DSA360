// valid anagram

#include<bits/stdc++.h>
using namespace std;

bool isAnagram(string s1, string s2){
    int n = s1.length();
    int m = s2.length();

    if( m == n ){
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        if(s1 == s2){
            return true;
        }
    }
    
    return false; 
}

int main(){

    string s1;
    cout << "enter first string: ";
    cin >> s1;
    
    string s2;
    cout << "enter second string: ";
    cin >> s2;

    cout << (isAnagram(s1,s2)? "Is valid angram.....": "Is not valid angram.....") << endl;

    return 0;
}