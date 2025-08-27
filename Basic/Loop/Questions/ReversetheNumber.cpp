#include<iostream>
using namespace std;
int main() {
  int n;
  cout<<"Enter the Number: ";
  cin>>n;
  int rev = 0;
  while(n>0){
    rev = (rev*10) + (n%10);
    n = n/ 10 ;

    // int ld = n%10;
    // rev*=10;
    // rev+=ld;
    // n/=10;
  }
  int s = rev + n;
  cout<<"Reverse is: "<<rev<<endl;
  cout<<"Sum of the initial digit and reverse is: "<<s<<endl;
  return 0;
}