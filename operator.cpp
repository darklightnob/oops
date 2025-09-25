#include<iostream>
using namespace std;

class complex{
    private:
        int real;
        int img;
    public:

        complex(){
            real=0;
            img=0;
        }
        
        complex(int r,int i){
            real=r;
            img=i;
        }

        complex operator +(complex c){
            complex temp;
            temp.real=real+c.real;
            temp.img=img+c.img;
            return temp;
        }
        
        // Correct friend function declaration
        friend void operator<<(ostream& os,complex c);

};

// Friend function implementation
void operator<<(ostream& os,complex c){
    os << c.real << " + " << c.img << "i" << endl;
}

int main(){

    complex c1(5,6);
    complex c2(8,2);
    complex c3;
    c3=c1+c2;
    cout << c3;  // Now this works!

    return 0;
}