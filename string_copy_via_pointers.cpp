#include<iostream>
using namespace std;
int main(){
    char y[]="hello";
    char s[100];
    char *ptr=s;
    char *src=y;
    while(*src!='\0'){
        *ptr = *src;
        ptr++;
        src++;
    }
    *ptr='\0';
    cout<<s<<endl;
}
