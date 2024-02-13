#include <iostream>
using namespace std;

int main(){

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int rows, cols;
    cin>>rows>>cols;

    int arr[rows][cols];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin>>arr[i][j];
        }
        
    }

    cout<<"Matrix is: \n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout<<arr[i][j]<<" ";
        }

        cout<<endl;
        
    }

    int x;
    cin>>x;

    bool found;

    found = false;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (x == arr[i][j])
            {
                cout<<i<<" "<<j<<"\n";
                found = true;
            }
            
        }
        
    }

    if (found)
    {
       cout<<"Element x:"<<x<<" has been found \n";
    }
    else
    {
        cout<<"Element x:"<<x<<" has not been found \n";
    }
    
    

    
    
    

}