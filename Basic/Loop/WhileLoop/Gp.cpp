#include<iostream>
using namespace std;
int main() {
  int n;
  cout<<"Enter the Number : "<<endl;
  cin>>n;
//   int a = 1;
// // 1 2 4 8 16 ....
//   for(int i=1;i<=n;i++) {
//     cout<<a<<" ";
//     a = a*2;
//   }

// 5 15 45
// int a = 5;
// for(int i=1;i<=n;i++) {
//   cout<<a<<" ";
//   a = a*3;
// }

//Homework -> print this GP -> 3 12 48 ... n
int a=3;
for(int i=1;i<=n;i++) {
  cout<<a<<" ";
  a=a*4;
}
  return 0;
}