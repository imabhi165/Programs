// #include<iostream>
// using namespace std;
// int main() {
//   int x =3;
//   int*p = &x;
//   cout<<&x<<endl;
//   cout<<p<<endl;
//   cout<<x<<endl;
//   cout<<*p<<endl;
//   // 0x61ff0c
//   cout<<&p<<endl;
// }

#include<iostream>
using namespace std;
int main() {
  int x = 12;
  int* ptr = &x;
  cout<<x<<endl;
  cout<<*ptr<<endl;
  *ptr = 14;
  cout<<x<<endl;
}