#include<iostream>
using namespace std;
int main() {
  char alphabet;
  cout<<"Enter an alphabet : ",cin>>alphabet;
 switch(alphabet) {
  case 'a':
  cout<<"It is a Vowel"<<endl;
  break;

  case 'A':
  cout<<"It is a Vowel"<<endl;
  break;

  case 'e':
  cout<<"It is a vowel"<<endl;
  break;

  case 'i':
  cout<<"It is Vowel"<<endl;
  break;

  case 'o':
  cout<<"It is Vowel"<<endl;
  break;

  case 'u':
  cout<<"It is Vowel"<<endl;
  break;

  default:
  cout<<"It is a Consonant"<<endl;

 }


  return 0;
}