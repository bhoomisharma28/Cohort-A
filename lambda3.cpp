#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
vector<int> numbers={1,7,8,3};
sort(numbers.begin(),numbers.end(),[](int a,int b){
return a+b;
});
cout<<"sorted numbers:"<<endl;
for(int num:numbers){
cout<<num<<" ";
}
cout<<endl;
return 0;
}
