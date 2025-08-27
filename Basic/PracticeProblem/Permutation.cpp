#include<iostream>
using namespace std;
int fact(int x){
  int f=1;
  for(int i=1;i<=x;i++){
    f*=i;
  }
  return f;
}
int main(){
int n;
cout<<"Enter n: ";
cin>>n;
int r;
cout<<"Enter r: ";
cin>>r;
int a=fact(n);
int b=fact(n-r);
cout<<a/b;
}
