//take input and sort in vetor

#include<bits/sdc++.h>
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

    cout <<"sorted array: ";
    for(int i=0; i<n; i++){
        cout << arr[i]<< " ";
    }
    
    return 0;
}