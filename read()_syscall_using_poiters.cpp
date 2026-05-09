#include<iostream>
using namespace std;
int main(){
    char *buffer[100];
    string s;
    getline(cin,s);
    int n=s.length();
    char *ptr=&s[0];
    for(int i=0;i<n;i++){
        *(buffer+i)=(ptr+i);
    }
    cout<<*buffer<<endl;
}
