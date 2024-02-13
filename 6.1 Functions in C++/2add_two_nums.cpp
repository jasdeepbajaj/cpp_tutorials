#include<iostream>
using namespace std;

void print(int a){
    cout<<a;
}

int add_two_nums(int a, int b){
    print(a);
    cout<<"+";
    print(b);
    cout<<"=";
    int sum = a + b;
    return sum;
    }

int main() {
    int a, b;
    cin>>a>>b;

    cout<<add_two_nums(a, b)<<endl;

    return 0;
    
}