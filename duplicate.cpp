#include<bits/stdc++.h>
using namespace std;
int main(){
string st1="my nam28e is lakhan2009";
string st2=st1;
int count=0;
sort(st2.begin(),st2.end());
for(int i=0;i<st2.length()-1;i++){
if(st2[i]==st2[i+1]){
cout<<"duplicate number:"<<st2[i]<<endl;
count++;
if(isalpha(st2[i]))
break;
}
cout<<"total dulpicate number:"<<count<<endl;
}
}

