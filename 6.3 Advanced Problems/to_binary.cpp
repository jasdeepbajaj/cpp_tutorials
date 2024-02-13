#include <bits/stdc++.h>
using namespace std;

int decimalTobinary(int num){
    int temp = 1;
    int ans = 0;

    while (temp<num)
    {
        temp*=2;
    }
    temp /= 2;
    // cout<<"Initial temp = "<<temp<<endl;
    while (temp>0)
    {
        int lastDigit = num/temp;
        // cout<<"Last Digit = "<<lastDigit<<endl;
        num = num - lastDigit*temp;
        // cout<<"Updated Num = "<<num<<endl;
        temp = temp/2;
        // cout<<"Updated Temp = "<<temp<<endl;
        ans = ans*10 + lastDigit;
        // cout<<"Updated Ans = "<<ans<<endl;
        // cout<<"\\\\\\\\\\"<<endl;
    }
    return ans;   
}

int decimalTooctal(int num){
    int temp = 1;
    int ans = 0;

    while (temp<num)
    {
        temp = temp * 8;
    }
    temp = temp/8;

    while (temp>0)
    {
        int lastDigit = num/temp;
        num = num - lastDigit*temp;
        temp = temp/8;
        ans = ans*10 + lastDigit;
    }
    return ans;
}

string decimalTohexadecimal(int num){
    int temp = 1;
    string ans = "";

    while (temp<num)
    {
        temp = temp * 16;
    }
    temp = temp/16;

    while (temp>0)
    {
        int lastDigit = num/temp;
        num = num - lastDigit*temp;
        temp = temp/16;
        if (lastDigit<=9)
        {
            ans = ans + to_string(lastDigit); //to_string() function converts any data type to string
        }
        else
        {
            char c = 'A' + lastDigit - 10;
            ans.push_back(c); //var.push_back(str) pushes the str to var at the back.
        }
        
    }
    return ans;
}

int32_t main() {
    int n;
    cin>>n;

    cout<<decimalTohexadecimal(n)<<endl;

    return 0;
}