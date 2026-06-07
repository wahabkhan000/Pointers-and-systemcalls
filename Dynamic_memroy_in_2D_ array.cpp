#include <iostream>
using namespace std;
int main() {
    cout<<"Enter values: ";
    int n,m;
    cin>>n>>m;
    int **ptr = new int *[n];

    for(int i=0;i<n;i++){
        *(ptr + i) = new int [m];
    }
    cout<<"Enter values: ";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           *(*(ptr + i)+j)=(i+1)+(j+1);
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<*(*(ptr+i)+j)<<" ";
        }
    }

    for(int i=0;i<n;i++){
        delete[] *(ptr+i);
    }

    delete[] ptr;
}
