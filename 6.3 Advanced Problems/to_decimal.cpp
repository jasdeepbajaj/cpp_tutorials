#include <bits/stdc++.h>
using namespace std;

int binaryTodecimal(int num){
    int ans = 0;
    int temp = 1; //2^0 - this will be updated to be a multiple of 2

    while (num>0)
    {
        int last_digit = num%10;
        ans += last_digit*temp;
        temp *= 2; //temp multiplied by 2 for next iteration
        num = num/10; //num to be updated to get next last digit
    }
    return ans;
}

int octaTodecimal(int num){
    int ans = 0;
    int temp = 1; //8^0 - this will be updated to be a multiple of 8

    while (num>0)
    {
        int last_digit = num%10;
        ans += last_digit*temp;
        temp *= 8; //temp multiplied by 2 for next iteration
        num = num/10; //num to be updated to get next last digit
    }
    return ans;
}

int hexadecimalTodecimal(string num){
    int ans = 0;
    int temp = 1; //16^0 - this will be updated to be a multiple of 16

    int s = num.size();

    for (int i = s-1; i >= 0; i--)
    {
        if (num[i] >= '0' && num[i]<='9')
        {
            ans+=temp*(num[i]-'0');
        }
        else if (num[i]>='A' && num[i]<='F')
        {
            ans+=temp*(num[i]-'A'+10);
        }
        temp *= 16; //temp multiplied by 16 for next iteration
    }
    return ans;
}

int32_t main() {
    // int n; //for binary and octadecimal
    string n; //for hexa decimal
    cin>>n;

    cout<<hexadecimalTodecimal(n)<<endl;
    // cout<<binaryTodecimal(n)<<endl;
    // cout<<octaTodecimal(n)<<endl;

    return 0;
}