#include<iostream>
#include<climits>
using namespace std;

int linearSearch(int arr[], int n, int key){
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
    
}

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
    
    int key;
    cin>>key;

    cout<<linearSearch(array, n, key)<<endl;

    return 0;
}