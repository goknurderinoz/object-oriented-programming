#include <iostream>
#include <string.h>
using namespace std;

class Parent{
    public:
        Parent() {
            cout<<"Constructor of parent class"<<endl;
        }
        ~Parent() {
            cout<<"Destructor of parent class"<<endl;
        }
};

class Child : public Parent{
    public:
        Child(){
            cout<<"Constructor of child class"<<endl;
        }
        ~Child(){
            cout<<"Destructor of child class"<<endl;
        }
};

int main() {
    Child obj;
}