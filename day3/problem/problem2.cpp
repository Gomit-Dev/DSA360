//remove duplicates

#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >>n;

    vector<int>arr;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        arr.push_back(x);
    }

    vector<int>final_arr;
    final_arr.push_back(arr[0]);
    
    for(int i=1; i<n; i++){
        if( arr[i-1] != arr[i]){
            final_arr.push_back(arr[i]);
        }
    }

    cout << "Array after removing duplicates: " ;
    for(int x : final_arr){
        cout << x << " ";
    }

    return 0;
}