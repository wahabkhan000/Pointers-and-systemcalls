#include <iostream>
using namespace std;
int main() {
    int length=0;
    cin>>length;
    int arr[length];
    for(int i=0;i<length;i++){
        cin>>arr[i];
    }
    int *ptr=arr;
    int max=*ptr;
    for (int i=length-1;i>0;i--) {
        if (max<*(ptr+i)) {
            max=*(ptr+i);
        }
    }
    cout<<max<<endl;
    for (int i=0;i<length;i++) {
        cout<<arr[i]<<" ";
    }
}
