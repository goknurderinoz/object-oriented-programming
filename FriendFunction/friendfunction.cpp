#include <iostream>
#include <string.h>
using namespace std;

class Test{
    private:
        int num;
    public:
        Test():num(0){
            cout<<"Constructor is called..."<<endl;
        }
        friend void show(Test obj1);
};

void show(Test obj1){
    obj1.num = 10;
    cout<<"The value of num: "<<obj1.num<<endl;
}

int main() {
    Test obj1;
    show(obj1);
    return 0;
}