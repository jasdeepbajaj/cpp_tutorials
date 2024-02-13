#include<iostream>
using namespace std;

int main() {
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin); // Redirects input to read from "input.txt"
    //     freopen("output.txt", "w", stdout); // Redirects output to write to "output.txt"
    // #endif
    char arr[100] = "apple";

    int i = 0;

    while (arr[i]!='\0')
    {
        cout<<arr[i]<<endl;
        i++;
    }
    

    return 0;
}
