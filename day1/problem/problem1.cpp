// reverae in vector

#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    vector<int>arr;

    for(int i=0;  i<n; i++){
        int x;
        cin >> x;
        arr.push_back(x);
    }

    int left = 0;
    int right = n-1;
    while(left<right){
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
    }

    cout << "Reversed array: " ;
    for(int i=0; i<n; i++){
        cout<< arr[i] << " ";
    }

    return 0;
}
