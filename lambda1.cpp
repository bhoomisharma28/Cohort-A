#include<iostream>
using namespace std;
int main(){
int x=10;
int y=20;

auto add=[=](int a){
return x+y+a;
};
cout<<"SUM:"<<add(9)<<endl;

auto addByRef=[&x,&y](int a){
x=10;
return x+y+a;
};
cout<<"Sum by reference:"<<addByRef(9)<<endl;
cout<<"x after modification : "<<x<<endl;
}


