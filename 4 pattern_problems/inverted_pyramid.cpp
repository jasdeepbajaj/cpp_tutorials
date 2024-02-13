#include<iostream>
using namespace std;


int main(){

    int n;
    cin>>n;

    for (int i=n; i>=1; i--) //for number of rows from 5 to 1
    {
        for (int j=1; j<=i; j++) // for number of stars equal to the row number
        {
            cout<<"*";
        }
        cout<<endl;
        
    }
    return 0;
}