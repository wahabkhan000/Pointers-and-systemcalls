#include<iostream>
using namespace std;
void mymemset(char *buffer,char a,int n){
    for(int i=0;i<n;i++){
        *(buffer+i)=a;
    }
}
int main() {
    char buffer[10];
    mymemset(buffer,'A',10);
    *(buffer+9)='\0';
    char *ptr=buffer;
    int i=0;
    while(*(ptr+i)!='\0'){
         cout<<*(ptr+i)<<" ";
         i++;
    }
}
