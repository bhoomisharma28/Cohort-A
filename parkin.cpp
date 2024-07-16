#include<iostream>
using namespace std;
int main(){
    int ch;
    char a;
    int car=0,bike=0,rickshaw=0;
    do{
    cout<<" ....PARKING COUNT...."<<endl;
    cout<<"\n1 Car park \n2 Bike park \n3 Rickshaw park \n4 exit"<<endl;
    cin>>ch;
    switch(ch){
        case 1:
            cout<<"Car parked"<<endl;
            car++;
            break;

        case 2:
            cout<<"Bike  parked"<<endl;
            bike++;
            break;

        case 3:
            cout<<"Rickshaw parked"<<endl;
            rickshaw++;
            break;

        case 4:
            cout<<"Exit"<<endl;
            break;

        default:

            cout<<"Invalid choice"<<endl;
            break;
    }
        cout<<"do you want to enter more(y/n):"<<endl;
        cin>>a;
        } while(a=='y'||a=='Y');
    cout<<"Total cars parked:"<<car<<endl;
    cout<<"Total bikes parked:"<<bike<<endl;
    cout<<"Total rickshaw parked:"<<rickshaw<<endl;


}
