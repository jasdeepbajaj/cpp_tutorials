#include <iostream> 
using namespace std; 

//swap by value - would get the same results

// void swap(int a, int b){
//     int temp = a;
//     a = b;
//     b = temp;
    
// }

// int main() { 
    
//     int a = 2;
//     int b = 4;

//     swap(a,b);
//     cout<<a<<" "<<b<<endl;

//     return 0;
// }

//swap by reference - would get the required results

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
    
}

int main() { 
    
    int a = 2;
    int b = 4;

    int *aptr = &a;
    int *bptr = &b;

    swap(aptr,bptr);
    cout<<a<<" "<<b<<endl;

    return 0;
}