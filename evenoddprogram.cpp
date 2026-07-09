#include<iostream>

using namespace std;
//yeah this is a simple program to check whether the number is even or odd


int main() {
    int n;
    cout<<"Enter a integer number - "<<endl;
    cin>>n;
    if(n%2==0) {
        cout<<"The number is even"<<endl;
    }
    else {
        cout<<"The number is odd"<<endl;
    }
    return 0;
}