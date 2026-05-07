// frequency of char in string

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);

    int n = s.length();
    vector<int>present(n,0);
    for(int i=0; i<n; i++){
        if(present[i] == 0 && s[i]!= ' '){
            int count = 1;
            for(int j=i+1;  j<n; j++){
                if( s[i] == s[j] ){
                    present[j] = 1;
                    count++;
                }
            }
            cout << s[i] << " -> " << count << endl;
        }
    }
    return 0;
}