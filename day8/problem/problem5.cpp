// Check Palindrome

#include<bits/stdc++.h>
using namespace std;

bool palindrome( string s, int l, int r){
    if( l<r ){
        if( s[l] != s[r] ){
            return false;
        }
        return palindrome(s,l+1,r-1);  
    }
    return true;
}

int main(){

    string s;
    cin >> s;

    int n = s.length();
    int l = 0;
    int r = n-1;

    if(palindrome(s,l,r)){        
        cout << "Is palindrome.....";        
    }
    else{
        cout << "Is not palindrome.....";
    }

    return 0;
}