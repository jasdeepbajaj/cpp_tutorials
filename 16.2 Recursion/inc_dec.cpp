#include <iostream>
using namespace std;

void print_till_one(int n){

    // base case
    if (n == 0)
    {
        return;
    }
    
    cout<<n<<endl;
    print_till_one(n-1);

}

void print_till_n(int n){

    if (n == 1){
        return;
    }

    print_till_n(n - 1);
    cout<<n<<endl;
    

}


int main(){

    int n;
    cin>>n;

    print_till_one(n);
    print_till_n(n);

    return 0;
}