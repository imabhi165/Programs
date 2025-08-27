// #include<iostream>
// using namespace std;
// int main() {
//   int n;
//   cout<<"Enter the Number : ";
//   cin>>n;
//   for(int i=n/2;i>=1;i--) {
//     if(n%i==0){
//       cout<<i<<" ";
//       break; //to get out of the loop immediately
//     }
//   }
 
  
// }

// #include<iostream>
// using namespace std;
// int main() {
//   int n;
//   cout<<"Enter the Number : ";
//   cin>>n;
//   for(int i=1;i<=n;i++){
//     for(int j=1;j<=i;j++){
//       if((i+j)%2==0){
//         cout<<"1"<<" ";
//       }
//       else{
//         cout<<"0"<<" ";
//       }
//     }
//     cout<<endl;
//   }
// }

#include<iostream>
using namespace std;
int fact(int x){
  int f=1;
  for(int i=1;i<=x;i++){
    f*=i;
  }
  return f;
}
int ncr(int n, int r){
  return fact(n)/(fact(r)*fact(n-r));
}

int main(){
  int n;
  cout<<"Enter n: ";
  cin>>n;
  for(int i=0;i<=n;i++){
    for(int j=0;j<=i;j++){
      cout<<ncr(i,j)<<" ";
    }
    cout<<endl;
  }
}