// count vowels in string 

#include<bits/stdc++.h>
using namespace std;

void vowelCount(string s, int n){
    int count = 0;

    int j=0;
    for(int i=0; i<n; i++){
        s[i] = tolower(s[i]);
        if( s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
           count++; 
        }
    }
    cout << "Count: " << count << endl;
}

int main(){

    string s;
    cin >> s;

    int n  = s.length();
    vowelCount(s,n);

    return 0;
}