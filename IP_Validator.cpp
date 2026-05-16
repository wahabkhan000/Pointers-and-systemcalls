#include<iostream>
using namespace std;
int main() {
    bool flag = false;
    char arr[39];
    char copy[39];
    do {
        flag = false;
        cout<<"Enter thr IP address : ";
        cin>>arr;
        if (arr[3]=='.'||arr[4]==':') {
            flag = true;
        }
    }while (flag==false);
    int index=0;
    int index_copy=0;
    while (arr[index]!='\0') {
        if (arr[index]!='0') {
            copy[index_copy]=arr[index];
            index_copy++;
        }
        index++;
    }
    copy[index_copy]='\0';
    cout<<copy<<endl;
}
