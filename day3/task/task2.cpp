//sorrted array in reverse order

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

    sort(arr.begin(),arr.end());

    cout << "sorted array reversed: ";
    for(int i=n-1; i>=0; i--){
        cout << arr[i]<<" ";
    }

    return 0;
}