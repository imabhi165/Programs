#include<iostream>
using namespace std;
int main() {
  int num1,num2;
  cin>>num1>>num2;
  cout<<"Value of num1 : "<<num1<<endl;
  cout<<"Value of num2 : "<<num2<<endl;


  int temp ;
  temp = num1;
  num1 = num2;
  num2 = temp;
  cout<<"Value of num1 after Swapping : "<<num1<<endl;
  cout<<"Value of num2 after Swapping : "<<num2<<endl;



  return 0;
}