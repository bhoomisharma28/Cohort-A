#include<iostream>
#include<vector>
#include<algorithm>
#include<C:\Users\18man\Documents\sortingall.cpp>
int main()
{
    vector<int> v ={2,3,6,1,0,9,4,5};
    int ch;
    cout<<"Enter your choice: \n1.Bubble Sort\n2.Selection Sort\n3.Insertion Sort\n4.Merge Sort"<<endl;
    cin>>ch;
    switch(ch)
    {
    case 1:
        Bubble(v);
        break;
    case 2:
        Selection(v);
        break;
    case 3:
        Insertion(v);
        break;
    case 4:
        Merge(v);
        break;
    default:
        cout<<"Invalid input!"<<endl;

    }
}
