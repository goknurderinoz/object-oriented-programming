#include <iostream>
#include <string.h>
using namespace std;
class B;
class A{
    private:
        int num1;
    public:
        friend void getValue(A &obj1, B &obj2);
        friend void Add(A &obj1, B &obj2);
};

class B{
    private:
        int num2;
    public:
        friend void getValue(A &obj1, B &obj2);
        friend void Add(A &obj1, B &obj2);
};

void getValue(A &obj1, B &obj2){
    cout<<"Enter first Number:";
    cin>>obj1.num1;
    cout<<"Enter second Number: ";
    cin>>obj2.num2;
    
}

void Add(A &obj1, B &obj2){
    int result=0;
    result = obj1.num1 + obj2.num2;
    cout<<"The result is: "<<result;;
}

int main() {
    A obj1;
    B obj2;
    getValue(obj1, obj2);
    Add(obj1, obj2);
    return 0;
}