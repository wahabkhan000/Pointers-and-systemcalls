#include <iostream>
using namespace std;
int main() {
  int arr[]={1,2,3,4,5};
  int *ptr=arr;
  for (int i=4;i>=0;i--) {
    cout<<*(ptr+i)<<" ";
  }
}
