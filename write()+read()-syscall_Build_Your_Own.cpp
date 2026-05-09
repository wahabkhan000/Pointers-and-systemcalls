#include<iostream>
using namespace std; 
int main(){ 
  char buffer[100]; 
  char *dest=buffer; 
  string s; 
  cout<<"Enter the string : "; 
  getline(cin,s); 
  int max_copy=0;
  cout<<"Enter the number of bytes you want to print: "; 
  cin>>max_copy; 
  char *src=&s[0]; 
  int count=1; 
  while(*src != '\0'){ 
  *dest=*src; 
  dest++; 
  src++; 
  if(count==max_copy){ 
  break; 
  } 
  count++; 
  } 
  *dest='\0'; 
  cout<<buffer<<endl;
}
