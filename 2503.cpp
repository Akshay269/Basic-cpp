#include<iostream>
using namespace std;

class Employee{
    int id;
    int salary;
    public:
        void setId(void){
         salary = 122;
         cout<<"Enter the id of emplyee"<<endl;
         cin>>id;

        }
        void getId(void){
            cout<<"The id of this emplyee is "<<id<<endl;
        }

};



int main(){
    // Employee akshay,sahil,suraj,tejas;
    // akshay.setId();
    // akshay.getId();
    Employee eb[4];
    for (int i = 0; i < 4; i++)
    {
        /* code */
        eb[i].setId();
        eb[i].getId();   
    }
    
    return  0;
}