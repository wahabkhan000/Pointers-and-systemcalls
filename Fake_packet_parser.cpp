#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the times you want to write memory: ";
    cin>>n;
    char buffer[n];
    char *ptr=buffer;
    for(int i=0;i<n;i++){
        cin>>*(ptr+i);
    }
    int type=*buffer;
    cout<<"Type is: "<<type<<endl;
    ptr++;
    cout<<"Data is: ";
    int i=0;
    while (*(ptr+i)!='\0'&&i!=n-1) {
        cout<<(int)*(ptr+i)<<" ";
        i++;
    }
    cout<<endl;
}
