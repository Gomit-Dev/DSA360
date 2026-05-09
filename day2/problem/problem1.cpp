//palindrome check

#include<bits/stdc++.h>
using namespace std;

void isPalindrome(string s, int n){
    
    int left = 0;
    int right = n-1;
    while( left<right ){
        if(s[left] != s[right]){
            cout << s << " is not palindrome." << endl;
            return ;
        }
        left++;
        right--;
    }    
    cout << s << " is palindrome." << endl;    
}

int main(){

    string s;
    cin >> s;

    int n = s.length();

    isPalindrome(s,n);

    return 0;
}