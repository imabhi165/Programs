#include<iostream>
using namespace std;
int main() {
  int n;
  cout<<"Enter the Number : ";
  cin>>n;
  int rev = 0;
  int sum;
  while(n>0) {
    int ld = n%10;
    rev = (rev*10) + ld;
    n = n/10;
    sum = rev + ld;
  }
  cout<<"Reverse is :"<<rev<<endl;
  cout<<"The sum of the Reversed Digit and Input digit is : "<<sum<<endl;

}