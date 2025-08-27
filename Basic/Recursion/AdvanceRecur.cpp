#include<iostream>
using namespace std;
void print(int n) {
  if(n>100) return;
  cout<<n<<endl;
  print(n+2);
}
int main() {
  print(2);
}