// store pair 

#include<bits/stdc++.h>
using namespace std;

int main(){

    pair<int,string>Student_details;
    
    cout << "Enter roll_no: ";
    int roll;
    cin >> roll;

    cout << "Enter name: ";
    string name;
    cin >> name;

    Student_details.first = roll;
    Student_details.second = name;

    cout<<"Student_details: "<<endl;
    cout<<"Roll_no => "<< Student_details.first << " | "<<"Name => "<< Student_details.second <<endl;

    return 0;
}