#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
vector<int> arr={20,9,28,56,49};
sort(arr.begin(),arr.end(),[](int a,int b){return b<a;});
cout<<"Sorted array:"<<endl;
for(int num:arr){
cout<<num<<" ";
}
}
