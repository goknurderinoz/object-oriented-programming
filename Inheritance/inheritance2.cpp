#include <iostream>
#include <string.h>
using namespace std;

class Parent{
    public:
        Parent(){
            cout<<"Constructor of parent class"<<endl;
        }
        ~Parent(){
            cout<<"Destructor of parent class"<<endl;
        }
};

class Child1 : public Parent{
    public:
        Child1(){
            cout<<"Constructor of child1 class"<<endl;
        }
        ~Child1(){
            cout<<"Destructor of child1 class"<<endl;
        }

};

class Child2 : public Parent{
    public:
        Child2(){
            cout<<"Constructor of child2 class"<<endl;
        }
        ~Child2(){
            cout<<"Destructor of child2 class"<<endl;
        }
};

int main(){
    Child1 obj1;
    Child2 obj2;
}