#include <iostream>
using namespace std;
int main() {
    cout<<"Enter values: ";
    int n,m,o,p;
    cin>>n>>m>>o>>p;
    int ****ptr = new int ***[n];
    
    for(int i=0;i<n;i++){
        *(ptr+i) = new int **[m];
        for(int j=0;j<m;j++){
            *(*(ptr+i)+j) = new int *[o];
            for(int k=0;k<p;k++){
                *(*(*(ptr+i)+j)+k) = new int[p];
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            for(int k=0;k<o;k++){
                for(int l=0;l<p;l++){
                    *(*(*(*(ptr+i)+j)+k)+l) = i+j+k+l;
                }
            }
        }
    }
    

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            for(int k=0;k<o;k++){
                for(int l=0;l<p;l++){
                    cout<<*(*(*(*(ptr+i)+j)+k)+l)<<" ";
                }
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            for(int k=0;k<o;k++){
                delete[] *(*(*(ptr+i)+j)+k);
            }
            delete[] ptr[i][j];
        }
        delete[] ptr[i];
    }

    delete[] ptr;
    return 0;
}
