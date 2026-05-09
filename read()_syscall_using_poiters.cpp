#include<iostream>
using namespace std;
int main(){
    char buffer[100];
    char *dest=buffer;
    string s;
    getline(cin,s);
    char *src=&s[0];
    while(*src != '\0'){
        *dest=*src;
        dest++;
        src++;
    }
    *dest='\0';
    cout<<buffer<<endl;
}
