#include<iostream>

using namespace std;

int main(){
    int x, y,age;
    
    cout<<"the recent year"<<endl;

    cin>>x;

    cout<<"Your birth year"<<endl;
    cin>>y;

    int & rec = x;
    int & birt = y;

    age = rec - birt;

     

    cout<<"your running age is:"<<age;
   








    return 0;
}