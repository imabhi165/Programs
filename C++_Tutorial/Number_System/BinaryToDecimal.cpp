#include <iostream>
using namespace std;

int main() {
  int n;
  cin>>n;


 int ans = 0;
 int power = 1;
 while(n>0){
  int last_digit = n % 10;
  ans += last_digit*power;
  power*=2;
  n /=10;
 }

 return 0;
}
