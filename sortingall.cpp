#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void Bubble(vector<int> &v)
{
    for(int i=0;i<v.size();i++)    //n-1 time
    for(int j=0;j<v.size()-i-1;j++)
    {
        if(v[j]>v[j+1])
        {
            swap(v[j],v[j+1]);
        }
    }

    cout<<"Sorted Vector: "<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}

void Selection(vector<int> &v)
{
     for(int i=0;i<v.size();i++)
    {
        int small=i;
    for(int j=i+1;j<v.size();j++)
    {
        if(v[small]>v[j])
        {
            swap(v[j],v[small]);
        }
    }
    }
    cout<<"Sorted Vector: "<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }

}

void Insertion(vector<int> &v)
{
    for(size_t i=1;i<v.size();++i)
    {
        int key =v[i];
        int j=i-1;
        while(j>=0 && v[j]>key)
        {
            v[j+1]=v[j];
            --j;
        }
        v[j+1]=key;
    }
    for (int num:v)
    {
        cout<<num<<" ";
    }

}

void Merge(vector<int> &v)
{
    stable_sort(v.begin(),v.end());
    for (int num:v)
    {
        cout<<num<<" ";
    }
}

