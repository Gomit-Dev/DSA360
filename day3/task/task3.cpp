//sort vector in descending


#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin >> n;

    vector<int>arr;
    for(int i=0; i<n; i++){
        int x;
        cin >>x;
        arr.push_back(x);
    }

    sort(arr.begin(),arr.end(),greater<int>());

    cout << "Descending sorted array: ";
    for(int i=0; i<n; i++){
        cout << arr[i]<<" ";
    }

    return 0;
}