#include<iostream> 
using namespace std; 
int main() {
    string y; 
    cout<<"Enter the string : ";
    getline(cin,y); 
    string s;
    cout<<"Enter the string : "; 
    getline(cin,s); 
    int n=y.length(); 
    int z=s.length(); 
    char *dest=&y[0]; 
    char *src=&s[0]; 
    if(n!=z) {
        cout<<"Strings are not equal."<<endl; 
        return 0;
    } else {
        while(*src != '\0') {
            if(*dest!=*src) {
                cout<<"Strings are not equal."<<endl;
                return 0;
            } 
            dest++; 
            src++;
        } 
        cout<<"Strings are equal."<<endl;
    }
}
