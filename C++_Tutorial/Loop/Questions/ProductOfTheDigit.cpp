#include<iostream>
using namespace std;
int main() {
  int n;
  cout<<"Enter The Number: ";
  cin>>n;
  int product = 1; //inti
  while(n>0){
    int ld = n%10;
    n = n/10;
    product = product*ld;

  }
cout<<product<<endl;


}