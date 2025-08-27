// #include<iostream>
// using namespace std;
// int main() {
//   for(int i=1;i<=20;i++){
//     // cout<<i<<" ";
//     //1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 
//     //if I want to skip 3 and 9 from this Number, I have to use continue;
//   if(i==3 || i ==9)
//    continue;
//     cout<<i<<" ";
//   }
// }


//Practice
#include<iostream>
using namespace std;
int main() {
  for(int i=1;i<=100;i++){
    if(i%2==0)
    continue;
    cout<<i<<" ";
    

  }
 

 return 0;
}