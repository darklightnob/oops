#include<iostream>
using namespace std;

class Employee{
    public:
        double id;
        char name[20];
        double salary;

         void get_data(){
            cout<<"write the id:"<<endl;
            cin>>id;
            cout<<"write the name:"<<endl;
            cin>>name;
            cout<<"write the salary:"<<endl;
            cin>>salary;
           
        }

        void put_data(){
            cout<<"Manager Details: "<<endl;
            cout<<"Employee ID: "<<id<<endl;
            cout<<"Name:"<<name<<endl;
            cout<<"Salary:"<<salary<<endl;
            


        }


        




};

class Manager:public Employee{
    public:
        char department[20];

        void get_data(){
            cout<<"write the id:"<<endl;
            cin>>id;
            cout<<"write the name:"<<endl;
            cin>>name;
            cout<<"write the salary:"<<endl;
            cin>>salary;
            cout<<"write the department:"<<endl;
            cin>>department;
        }

        void put_data(){
            cout<<"Manager Details: "<<endl;
            cout<<"Employee ID: "<<id<<endl;
            cout<<"Name:"<<name<<endl;
            cout<<"Salary:"<<salary<<endl;
            cout<<"department:"<<department<<endl;


        }


};

int main(){
    Manager m1;
    m1.get_data();
    m1.put_data();
    return 0;


}