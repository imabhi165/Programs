// #include<iostream>
// using namespace std;
// int main() {
//   int x=2;
//   int y=4;
//   cout<<x<<" "<<y<<endl;
//   int temp =x;
//   x=y;
//   y=temp;
//   cout<<x<<" "<<y<<endl;
// }

//2nd method using mathematical operation without using extra variable
#include<iostream>
using namespace std;
int main() {
  int x;
  cout<<"Enter x: ";
  cin>>x;
  int y;
  cout<<"Enter y: ";
  cin>>y;
  cout<<x<<" "<<y<<endl;
   x = x + y;
   y = x - y;
   x = x - y;
  cout<<x<<" "<<y<<endl;
}