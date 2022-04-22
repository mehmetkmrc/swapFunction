#include<iostream>
using namespace std;

void swapping(int first,int second) {
    int temp= first;
    first= second;
    second=temp;
    cout<<"First: "<<first<<endl<<"Second: "<<second<<endl;
    }

int main(){
    int first, second;

    cout<<"Enter your first integer: ";
    cin>>first;
    cout<<"Enter your second integer: ";
    cin>>second;
    cout<<"Before swapping: "<<endl<<"First: "<<first<<endl<<"Second: "<<second<<endl;
    cout<<"After swapping: "<<endl;
    swapping(first, second);
    
    

    return 0;
}