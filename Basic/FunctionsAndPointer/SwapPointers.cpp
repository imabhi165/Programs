#include<iostream>
using namespace std;
  void swap(int* a, int *b){
    int temp = *a;
    *a=*b;
    *b=temp;
}

int main() {
  int x =23;
  int y =27;
  cout<<"Before swapping "<<x<<" "<<y<<endl;
  swap(&x,&y);
  cout<<"After swapping "<<x<<" "<<y<<endl;
}
