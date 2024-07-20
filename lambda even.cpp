#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector <int> numbers={1,9,20,28,56};
    auto it=find_if(numbers.begin(),numbers.end(),[](int n){
        return n%2 ==0;
    });
    if(it !=numbers.end()){
        cout<<"First even number found:"<<*it<<endl;

    }
    else{
        cout<<" even number not  found:"<<endl;
    }
    return 0;
}
