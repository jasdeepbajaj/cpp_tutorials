#include<iostream>
using namespace std;

int main() {

    int n;
    cout<<"Type in the size of array that you want: "<<endl;
    cin>>n;

    int array[n];

    for (int i = 0; i < n; i++)
    {
        cout<<"Type in Element number "<<(i+1)<<endl;
        cin>>array[i];
    }
    cout<<"Array elements are "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<array[i]<<" ";
    }
    

    // int array[4] = {10, 20, 30, 40};
    // array[0] = 10;
    // array[1] = 20;
    // array[2] = 30;
    // array[3] = 40;

    // cout<<array[3]<<endl;
    

    return 0;
}