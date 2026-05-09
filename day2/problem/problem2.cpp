// count vowels and contstants


#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    getline(cin,s);

    int count = 0;
    int const_count = 0;
    int n = s.length();
    for(int i=0; i<n; i++){
        if( s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ){
            count++;
        }
        else if( s[i] != ' '){
            const_count++;
        }
    }

    cout <<"Number of vowels: "<< count << endl;
    cout <<"Number of contstants: "<< const_count << endl;

    return 0;
}