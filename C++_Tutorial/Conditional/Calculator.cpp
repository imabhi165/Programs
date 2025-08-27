#include<iostream>
using namespace std;
int main() {
int n1;
cout<<"Enter First Number:"<<endl;
cin>>n1;
int n2;
cout<<"Enter 2nd Number : "<<endl;
cin>>n2;

cout<<"Enter an Operator(+,-,*,/,%)";
 char op;
 cin>>op;
 switch (op)
 {
 case '+':
  cout<<"The Sum is : "<<n1+n2<<endl;
  break;
  
  case '-':
  cout<<"The Subtraction is : "<<n1-n1<<endl;
  break;

  case '*':
  cout<<"The product is : "<<n1*n2<<endl;
  break;

  case '/':
  cout<<"The Division is : "<<n1/n2<<endl;
  break;

  case '%':
  cout<<"The reamainder is : "<<n1%n2<<endl;
  break;

 
 default:
 cout<<"Enter a Valid operator"<<endl;
  break;
 }


 return 0;

}