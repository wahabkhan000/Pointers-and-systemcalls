#include <iostream>
using namespace std;
int main() {
    cout<<"Enter values: ";
    int n=0;
    cin>>n;
    int m=0;
    int **ptr = new int *[n];

    for(int i=0;i<n;i++){
        if(i%2==0){
            m=2;
        }
        else{
            m=4;
        }
        *(ptr + i) = new int [m];
    }
    for(int i=0;i<n;i++){
        if(i%2==0){
            m=2;
        }
        else{
            m=4;
        }
        for(int j=0;j<m;j++){
           *(*(ptr + i)+j)=(i+1)+(j+1);
        }
    }

    for(int i=0;i<n;i++){
        if(i%2==0){
            m=2;
        }
        else{
            m=4;
        }
        for(int j=0;j<m;j++){
            cout<<*(*(ptr+i)+j)<<" ";
        }
        cout<<endl;
    }

    for(int i=0;i<n;i++){
        delete[] *(ptr+i);
    }

    delete[] ptr;

}
