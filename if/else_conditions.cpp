#include<iostream>
using namespace std;

int main () {

char ch ;
cout<< "enter the value for ch :"<< endl;
cin >> ch;
 
 if (ch>='A'&&ch<='Z'){
    cout<< "uppercase"<< endl;
 }
 else if (ch>='a'&&ch=<'z'){
    cout<<"lowerscase"<<endl;
 }else {
    cout<<"it is integer"<<endl;
 }

}