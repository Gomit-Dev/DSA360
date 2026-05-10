//check Duplicates return true if duplicate 


#includes<bits/stdc++.h>
using namespace std;

bool duplicateCheck( vector<int>&arr, int n){
    map<int,int>mp;
    for(int x: arr){
        mp[x]++;
    }

    if( mp[n] > 1 ){
        return true;
    }
    return false;
}

int main(){

    int n;
    cin >> n;
    
    int find;
    cin >> find;

    vector<int>arr;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        arr.push_back(x);
    }
    
    cout << ( (duplicateCheck(arr, find))? "There is duplicate...." : "There is no duplicate...." ) << endl;

    return 0;
}