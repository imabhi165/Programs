#include<iostream>
using namespace std;
int main() {
  int m;
  cout<<"Enter the Number of Rows: ";
  cin>>m;
  // int n;
  // cout<<"Enter the Number of columns : ";
  // cin>>n;
  for(int i=1;i<=m;i++){
    for(int j=1;j<=i;j++){
      
     cout<<j<<" ";

      
    }
    cout<<endl;
  }
  
}