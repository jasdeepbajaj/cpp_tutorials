#include<iostream>
#include<climits>
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
    
    int maxNo=INT_MIN;
    int minNo=INT_MAX;

    for (int i = 0; i < n; i++)
    {
        maxNo = max(maxNo, array[i]);
        minNo = min(minNo, array[i]);  
    }
    
    cout<<"Max Number in the array is: "<<maxNo<<endl;
    cout<<"Min number in the array is: "<<minNo<<endl;
    

    // int array[4] = {10, 20, 30, 40};
    // array[0] = 10;
    // array[1] = 20;
    // array[2] = 30;
    // array[3] = 40;

    // cout<<array[3]<<endl;
    

    return 0;
}