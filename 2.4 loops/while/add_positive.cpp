#include<iostream>
using namespace std;


int main(){
    int n;
    cin>>n;

    int sum = 0;

    while (n>0)
    {
        sum +=  n;
        cin>>n;
    }

    cout<<"The sum is "<<sum<<endl;
    
    return 0;

}