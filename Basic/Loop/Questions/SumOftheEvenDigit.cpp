 #include<iostream>
 using namespace std;
 int main() {
  int n;
  cout<<"Enter the Number : ";
  cin>>n;
  int sum = 0;
  while(n!=0){
    int ld = n%10;
    n=n/10;
    if(ld%2==0){
        sum = sum + ld;
    }
  
  }
  cout<<sum<<endl;
 }