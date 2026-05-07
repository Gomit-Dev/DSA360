//largest element in vector

#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;

    vector<int>arr;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        arr.push_back(x);
    }

    int min = arr[0];
    int max = arr[0];
    for(int i=0; i<n; i++){
        if(min>arr[i]){
            min = arr[i];
        }
        if(max<arr[i]){
            max = arr[i];
        }
    }

    cout << "Max: "<< max << endl;
    cout << "Min: "<< min << endl;

    return 0;
}
