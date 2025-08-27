// #include<iostream>
// using namespace std;
// void greet(){
//   cout<<"Good Morning"<<endl;
//   cout<<"How Are you?"<<endl;

// }
// void india() {
//   cout<<"I am Abhishek Kumar"<<endl;
//   cout<<"Your are in India"<<endl;
// }
// int main() {
//   greet();
//   cout<<"Hey!!"<<endl;
//   india();

// }



// #include<iostream>
// using namespace std;
// void sum() 
// {
//   int a , b;
//  cin>>a>>b;
//  cout<<"The sum of a and b is "<<a+b<<endl;

// }

// void mul() {
//   int x,y;
//   cin>>x>>y;
//   cout<<"The Multilication of x and y is" <<x*y<<endl;
//   return;
// }

// int main() {
//   sum();
//   mul();

// }


//main functions cannot be called more than once 
// return keyword hai jis se main functions ka khaatma ho jata hai ,it is kind of like break

//how functions are work -> ek ke ander dusra function

#include<iostream>
using namespace std;

void divide() {
  float a ,b, div;
  cout<<"Enter First Number: ";
  cin>>a;
  cout<<"Enter 2nd Number: ";
  cin>>b;
  div = a/b;
  cout<<"Final! answer is : "<<div<<endl;

}

int main(){
  divide();
}


