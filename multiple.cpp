#include<iostream>
using namespace std;

class Faculty{
    public:
        int facultyID;
        char name[30];
        char department[30];


};

class Research{
    public:
        char projectTitle[30];
        double fundingAmount;

};

class ResearchFaculty:public Faculty,public Research{
    public:
        void set_data(){
            cout<<"enter the Faculty ID:"<<endl;
            cin>>facultyID;
            cout<<"enter the Name:"<<endl;
            cin>>name;
            cout<<"enter the Department:"<<endl;
            cin>>department;
            cout<<"enter the Project Title:"<<endl;
            cin>>projectTitle;
            cout<<"enter the Funding Amount:"<<endl;
            cin>>fundingAmount;

        }

        void display(){
            cout<<"Research Faculty Details:"<<endl;
            cout<<"Faculty ID:"<<facultyID<<endl;
            cout<<"Name:"<<name<<endl;
            cout<<"Department:"<<department<<endl;
            cout<<"Project Title:"<<projectTitle<<endl;
            cout<<"Funding Amount:"<<fundingAmount<<endl;
        }

};

int main(){
    ResearchFaculty rf1;
    rf1.set_data();
    rf1.display();

    return 0;
}