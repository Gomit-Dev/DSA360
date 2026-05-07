// find maximum element

#include<bits/stdc++.h>
using namespace std;

void maximumElement(vector<int>&arr, int n){
    int max = arr[0];
    for(int i=1; i<n; i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    cout << "max: " << max << endl;
}

int main(){

    int n;
    cin >> n;

    vector<int>arr;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        arr.push_back(x);
    }

    maximumElement(arr,n);

    return 0;
}