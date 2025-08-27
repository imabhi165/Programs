#include<iostream>
using namespace std;
int main() {
  int a , b, c;
  cout<<"Enter the First Number : ",cin>>a;
  cout<<"Enter the 2nd Number : ",
  cin>>b;
  cout<<"Enter 3rd Number  : ",cin>>c;
  if(a>b && a>c) {
    cout<<a<<" is greater than "<< b<<" and "<<c<<endl;
  }
  else if (b>a && b>c)
  {
    cout<<b<<" is greater than " <<a <<" and " <<c<<endl;
  }
  else if (c<a && c<b)
  {
    cout<<c<<" is greater than "<<a<<" and "<<b<<endl;
  }
  
  return 0;
}