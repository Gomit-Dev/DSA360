// Reverse Array

#include<bits/stdc++.h>
using namespace std;

void reverse(vector<int>&arr, int l,int r){
    if(l<r){
        int temp = arr[l];
        arr[l] = arr[r];
        arr[r] = temp;
        reverse(arr, l+1, r-1);
    }
    return;
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

    int l = 0;
    int r = n-1;
    reverse(arr,l,r);

    cout  << "Reverse array: " ;
    for(int x: arr){
        cout << x << " ";
    }

    return 0;
}