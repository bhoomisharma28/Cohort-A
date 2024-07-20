#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
int x=10;
auto modifyx = [x]() mutable {
x = 20; //this modifies the local copy of x,not the original x
cout<<"inside lamda, x="<< x<<endl;
};
modifyx();
cout<<"outside lamda,x = "<< x<<endl;
return 0;
}
