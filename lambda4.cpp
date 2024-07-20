#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector <int> numbers={1,2,5,8,3};
    for_each(numbers.begin(),numbers.end(),[](int n){
        cout<<n<<" ";
    });
    cout<<endl;
    return 0;
}
