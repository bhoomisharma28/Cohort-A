#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<string> q;
    q.push("Bhoomi");
    q.push("Preeti");
    q.push("Chetna");

    cout<<"Size: "<<q.size()<<endl;
    q.pop();
    cout<<"Size after pop: "<<q.size()<<endl;
    cout<<"Front element: "<<q.front()<<endl;
    int n = q.size();

    for(int i=0;i<n;i++)
    {
        cout<<q.front()<<endl;
        q.pop();
    }

}
