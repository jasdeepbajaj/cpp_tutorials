#include<iostream>
#include<math.h>
using namespace std;

int factorial(int num){

    int fact = 1;
    for (int i = num; i >= 1; i--)
    {
        fact *= i;
    }
    return fact;
    

}
int main() {

    int n;
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            int ans = factorial(i)/(factorial(j)*factorial(i-j));
            cout<<ans<<" ";
        }
        cout<<endl;
    }

    return 0;
}