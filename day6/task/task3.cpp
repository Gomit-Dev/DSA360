// Check palindrome string

#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string s, int n){

    int left = 0;
    int right = n-1;

    while(left < right){
        if(s[left] != s[right]){
            return 0;
        }
        left++;
        right--;
    }
    return 1;
}

int main(){
    string s1;
    cin >> s1;

    int n = s1.length();
  
    if(isPalindrome(s1,n)){
        cout << "Is palindrome" << endl;
    }
    else{
        cout << "Is not palindrome" << endl;
    }
    
    
    return 0;
}