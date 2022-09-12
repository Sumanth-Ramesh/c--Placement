#include<iostream>
using namespace std;

int main(){
int n;
cout<<"enter the value of n:"<< endl;
cin>> n;

int i=1;
int sub=0;

while (i<=n){

sub = sub - i;
i = i + 1;
cout<< "sub:" << sub << endl;


}
}