#include<iostream>
using namespace std;
int main() {
    char buffer[5];
    char *ptr=buffer;
    int n;
    cout<<"Enter the times you want to write memory: ";
    cin>>n;
    char a;
    cout<<"enter the char you want to write in memory: ";
    cin>>a;
    for(int i=0;i<n;i++){
        *(ptr+i)=a;
    }
    for(int i=0;i<n;i++){
        cout<<*(ptr+i)<<" ";
    }
    cout<<endl;
}
