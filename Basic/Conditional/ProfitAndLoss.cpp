#include<iostream>
using namespace std;
int main() {
  int cp;
  cout<<"Enter The Cost Price : ",cin>>cp;
  int sp;
  cout<<"Enter the Selling price :",cin>>sp;
  int profit = sp - cp;
  int loss = cp - sp;
  if(cp<sp) {
    cout<<"Profit is : "<<profit<<endl; 
    }
  else{
    cout<<"Loss is : "<<loss<<endl;
  }
}

