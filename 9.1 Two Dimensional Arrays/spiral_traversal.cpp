#include <iostream>
using namespace std;

signed main() {

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n,m;
    cin >> n >>m;

    int a[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin>>a[i][j];    
    }
    
    //spiral order print

    int row_start = 0; 
    int row_end = n-1; 
    int column_start = 0;
    int column_end = m-1;

    while (row_start<=row_end && column_start<=column_end)
    {
        //for row_start
        for (int col = column_start; col <= column_end; col++)
        {
            cout<<"printing element at "<<row_start<<" "<<col<<" ";
            cout<<a[row_start][col]<<"\n";
        }
        row_start++;

        //for column_end
        for (int row = row_start; row <= row_end; row++)
        {
            cout<<"printing element at "<<row<<" "<<column_end<<" ";
            cout<<a[row][column_end]<<"\n";
        }
        column_end--;

        //for row_end
        for (int col = column_end; col >= column_start; col--)
        {
            cout<<"printing element at "<<row_end<<" "<<col<<" ";
            cout<<a[row_end][col]<<"\n";
        }
        row_end--;

        //for column_start
        for (int row = row_end; row >= row_start; row--)
        {
            cout<<"printing element at "<<row<<" "<<column_start<<" ";
            cout<<a[row][column_start]<<"\n";
        }
        column_start++;
    
    }
    
      

}