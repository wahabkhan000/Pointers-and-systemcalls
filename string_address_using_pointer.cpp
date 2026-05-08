#include<iostream>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int n=s.length();
    char *ptr=&s[0];
    for(int i=0;i<n;i++){
        cout<<"Character: "<<*(ptr+i)<<" Address: "<<(void*)(ptr+i)<<endl;
    }
}
