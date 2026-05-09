#include<iostream>
using namespace std;
int main(){

    int n;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int min = arr[0];
    int max = arr[0];

    for(int i=0; i<n; i++){
        if(max<arr[i]){
            max= arr[i];
        }
        if(min>arr[i]){
            min = arr[i];
        }
    }
    if(min == max){
        cout << "no max and min found." << endl;
        return 0;
    }

    cout << "min: "<< min << endl;
    cout << "max: "<< max << endl;

    return 0;

}