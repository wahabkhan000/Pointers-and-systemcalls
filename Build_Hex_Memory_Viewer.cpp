#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter the string : ";
    getline(cin,s);
    char *src=&s[0];
    while(*src!='\0'){
        cout<<"character is: "<<*src<<endl;
        cout<<"Address is: "<<(void*)src<<endl;
        int ascii=*src;
        cout<<"Ascii value is: "<<ascii<<endl;
        src++;
    }
}
