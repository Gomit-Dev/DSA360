// count number of even, odd

#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    
    int even = 0;
    
    for(int i=0; i<n; i++){
        if(arr[i]%2==0){
            even++;   
        }
    }
    
    cout <<  "count_of_even: " << even<<endl;
    cout <<  "count_of_odd: " << n-even<<endl;

    return 0;
    
}